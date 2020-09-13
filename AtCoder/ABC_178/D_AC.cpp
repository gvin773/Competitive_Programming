#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#define MOD 1000000007
using namespace std;

typedef long long ll;

ll s, dp[2001];

ll dist(ll n)
{
    if(dp[n] != 0) return dp[n];
    if(n == 0) return dp[n] = 1;

    int i;
    ll cnt = 0;
    for(i = 3; n-i >= 0; i++)
        cnt = (cnt + dist(n-i))%MOD;
    return dp[n] = cnt;
}

int main()
{
    onlycc;
    cin >> s;
    cout << dist(s);

    return 0;
}
