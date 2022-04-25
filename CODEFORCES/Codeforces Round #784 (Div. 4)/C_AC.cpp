#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n, a[100];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        int x = a[0] & 1;
        bool flag = false;
        for(int i = 0; i < n; i += 2)
        {
            if((a[i] & 1) != x)
            {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        if(flag) continue;

        x = a[1] & 1;
        flag = false;
        for(int i = 1; i < n; i += 2)
        {
            if((a[i] & 1) != x)
            {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        if(flag) continue;
        cout << "YES\n";
    }

    return 0;
}
