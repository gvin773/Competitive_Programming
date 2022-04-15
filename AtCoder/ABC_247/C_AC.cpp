#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
string dp[20];

void f(int now)
{
    if(now == 1)
    {
        cout << 1 << ' ';
        return;
    }
    f(now-1);
    cout << now << ' ';
    f(now-1);
}

int main()
{
    onlycc;
    cin >> n;
    dp[1] = "1";
    f(n);
    for(int i = 2; i <= n; i++)
    {
  //      cout << dp[i-1] <<
        dp[i] = dp[i-1] + to_string(i) + dp[i-1];
    }
    //for(int i = 0; i < dp[n].size(); i++) cout << dp[n][i] << ' ';

    return 0;
}
