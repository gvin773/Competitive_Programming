#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, m, k, dp[100][3000], ans;
const int MOD = 998244353;

ll f(ll now, ll sum)
{
    if(dp[now][sum] != -1) return dp[now][sum];

    ll &ret = dp[now][sum] = 0;
    for(int i = 1; i <= m; i++)
    {
        if(sum-i >= now-1) ret = (ret + f(now-1, sum-i)%MOD)%MOD;
        else break;
    }

    return ret;
}

int main()
{
    onlycc;
    cin >> n >> m >> k;

    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < 3000; i++) dp[0][i] = 0;
    for(int i = 0; i < 100; i++) dp[i][0] = 0;
    for(int i = 1; i <= m; i++) dp[1][i] = 1;
    for(int i = 1; i <= n; i++) dp[i][i] = 1;
    for(int i = n; i <= k; i++) ans = (ans + f(n, i)%MOD)%MOD;
    cout << ans;

    return 0;
}
