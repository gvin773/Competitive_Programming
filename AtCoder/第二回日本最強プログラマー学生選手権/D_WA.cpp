#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
#define MOD 1000000007
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, p, ans;

void track(ll sum, ll len)
{
    if(len == n)
    {
        ans += 1;
        ans %= MOD;
        return;
    }

    for(ll i = 1; i < p; i++)
    {
        sum += i;
        if(sum % p == 0)
        {
            sum -= i;
            continue;
        }
        track(sum%p, len+1);
        sum -= i;
    }
}

int main()
{
    onlycc;
    cin >> n >> p;
    track(0, 0);
    cout << ans;

    return 0;
}
