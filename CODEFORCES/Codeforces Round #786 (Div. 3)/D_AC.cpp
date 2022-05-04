#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc, n, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n&1)
        {
            for(int i = 1; i < n; i+=2)
            {
                if(a[i] > a[i+1]) swap(a[i], a[i+1]);
            }

            int b = a[0];
            for(int i = 1; i < n; i++)
            {
                if(b > a[i])
                {
                    cout << "NO\n";
                    goto gg;
                }
                b = a[i];
            }
            cout << "YES\n";
            gg:;
        }
        else
        {
            for(int i = 0; i < n; i+=2)
            {
                if(a[i] > a[i+1]) swap(a[i], a[i+1]);
            }

            int b = a[0];
            for(int i = 1; i < n; i++)
            {
                if(b > a[i])
                {
                    cout << "NO\n";
                    goto hh;
                }
                b = a[i];
            }
            cout << "YES\n";
            hh:;
        }
    }

    return 0;
}
