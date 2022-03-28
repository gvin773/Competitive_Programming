#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, p2[46];

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i <= 40; i++) p2[i] = pow(2, i);
    for(int tc = 0; tc < t; tc++)
    {
        vector<ll> r;
        ll ans = 0;
        cin >> n;

        for(int i = 40; i >= 0; i--)
        {
            if(n-p2[i] >= 0)
            {
                ans++;
                n -= p2[i];
                r.push_back(p2[i]);
            }
        }

        sort(r.begin(), r.end());
        ll fac = 1;
        for(int i = 2; i <= 15; i++) fac *= i;
        unordered_set<ll> save;
        for(int k = 15; k >= 2; k--)
        {
            ll temp = fac, cnt = 0;
            for(int i = r.size()-1; i >= 0; i--)
            {
                if(temp-r[i] >= 0)
                {
                    cnt++;
                    temp -= r[i];
                    save.insert(r[i]);
                }
            }
            if(temp == 0)
            {
                ans -= (cnt-1);
                for(auto it = r.begin(); it != r.end();)
                {
                    if(save.find(*it) != save.end()) r.erase(it);
                    else it++;
                }
            }

            fac /= k;
        }

        cout << ans << '\n';
    }

    return 0;
}
