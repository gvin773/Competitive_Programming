#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll ipow(ll a, ll b)
{
    if(b == 0) return 1;

    ll ans = ipow(a, b/2);
    ans *= ans;

    if(b%2 == 1) ans *= a;

    return ans;
}

ll n;
pair<ll, ll> p;
bool check;

int main()
{
    onlycc;
    cin >> n;
    for(int a = 1; ipow(3, a) <= n; a++)
    {
        for(int b = 1; ipow(5,b) <= n; b++)
        {
            if(n == ipow(3, a) + ipow(5, b))
            {
                check = true;
                p.first = a;
                p.second = b;
            }
        }

        if(check) break;
    }

    if(check) cout << p.first << " " << p.second;
    else cout << -1;

    return 0;
}
