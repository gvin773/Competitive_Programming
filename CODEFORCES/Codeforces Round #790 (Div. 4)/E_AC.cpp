#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, q, a[200000], ps[200000], x;

bool cmp(ll a, ll b)
{
    return a > b;
}

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> q;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, cmp);

        ps[0] = a[0];
        for(int i = 1; i < n; i++) ps[i] = ps[i-1] + a[i];

        for(int i = 0; i < q; i++)
        {
            cin >> x;
            ll ans = lower_bound(ps, ps+n, x) - ps;
            cout << (ans+1 > n ? -1 : ans+1) << '\n';
        }
    }

    return 0;
}
