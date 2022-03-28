#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;

typedef long long ll;

ll t, n;
string s;

ll fact(ll x)
{
    ll ret = 1;
    for(ll i = 1; i <= x; i++)
    {
        ret = (ret*i)%MOD;
    }
    return ret;
}

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        ll ans = 0;
        cin >> n;
        if(n & 1) cout << 0 << '\n';
        else cout << (fact(n/2)%MOD)*(fact(n/2)%MOD)%MOD << '\n';
    }

    return 0;
}
