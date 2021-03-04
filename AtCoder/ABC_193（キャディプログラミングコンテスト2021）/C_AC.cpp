#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a, p, x, ans = 10e9+1, cnt;
set<ll> s;

ll pow(ll a, ll b)
{
    if(b == 0) return 1;

    ll ans = pow(a, b/2);
    ans *= ans;
    if(b%2 == 1) ans *= a;
    return ans;
}

int main()
{
    onlycc;
    cin >> n;

    for(int i = 2; i <= 100000; i++)
    {
        for(ll j = 2, ret = pow(i, j); ret <= n; j++, ret = pow(i, j))
        {
            cnt++;
            if(s.find(ret) != s.end()) cnt--;
            else s.insert(ret);
        }
    }

    cout << n-cnt;

    return 0;
}
