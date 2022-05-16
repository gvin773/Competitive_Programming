#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, a[50];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        ll cnt = 0;
        for(int i = n-2; i >= 0; i--)
        {
            while(a[i+1] <= a[i] && a[i] != 0)
            {
                a[i] /= 2;
                cnt++;
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(a[i-1] >= a[i])
            {
                cout << -1 << '\n';
                goto xy;
            }
        }
        cout << cnt << '\n';
        xy:;
/*
        a[0] = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] != 0 && a[i-1] < a[i]/2) a[i] /= 2;
        }
        for(int i = 1; i < n; i++)
        {
            if(a[i-1] >= a[i])
            {
                cout << -1 << '\n';
            }
        }*/
    }

    return 0;
}
