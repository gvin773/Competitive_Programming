#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n, k, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;

        ll num[31] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            for(int j = 0; j < 31; j++)
            {
                ll x = (1 << j);
                if(!(x & a[i])) num[j]++;
            }
        }

        for(int i = 30; i >= 0; i--)
        {
            if(k <= 0) break;
            if(k >= num[i])
            {
                k -= num[i];
                num[i] = 0;
            }
        }

        ll ans = 0;
        for(int i = 0; i < 31; i++)
        {
            if(!num[i]) ans += (1<<i);
        }

        cout << ans << '\n';
    }

    return 0;
}
