#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll a, b, c;
#define mod 998244353

int main()
{
    onlycc;
    cin >> a >> b >> c;
    ll sum = 0;

    ll C = (c%mod*((c+1)%mod))%mod;
    ll B = (b%mod*((b+1)%mod))%mod;
    ll A = (a%mod*((a+1)%mod))%mod;

    C = (ll)((C%mod) * pow_mod(2, mod-2, mod))%mod;
    B = (ll)((B%mod) * pow_mod(2, mod-2, mod))%mod;
    A = (ll)((A%mod) * pow_mod(2, mod-2, mod))%mod;

    cout << (((A*B)%mod)*C)%mod;

    return 0;
}
