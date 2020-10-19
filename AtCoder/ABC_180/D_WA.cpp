#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll x, y, a, b, ex, tex;

ll ipow(ll a, ll b)
{
    if(b == 0) return 1;

    ll ans = ipow(a, b/2);
    ans *= ans;

    if(b%2 == 1) ans *= a;

    return ans;
}

int main()
{
    onlycc;
    cin >> x >> y >> a >> b;

    ll k, temp, i;

    for(i = 0; x*(ll)ipow(a, i) < y; i++){}
    if(i != 0) i--;

    for(k = 0; k <= i; k++)
    {
        temp = x*(ll)ipow(a, k);
        if((y-temp)%b == 0) tex = ((y-temp)/b-1);
        else tex = (y-temp)/b;
        ex = max(ex, tex+k);
    }

    cout << ex;

    return 0;
}
