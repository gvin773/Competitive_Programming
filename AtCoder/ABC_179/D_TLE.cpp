#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define MOD 998244353
using namespace std;

typedef long long ll;

int n, k, a, b, dp[200000];
vector<int> s;
ll ret;

int answer(int num)
{
    if(num < 0) return 0;
    if(dp[num] != 0) return dp[num];
    if(num == 0) return dp[num] = 1;

    ll ret = 0;
    for(auto i = s.begin(); i != s.end(); i++)
    {
        ret = (ret+answer(num - *i)) % MOD;
    }

    return dp[num] = ret;
}

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> a >> b;
        for(int i = a; i <= b; i++)
            s.push_back(i);
    }

    //for(int i = 0; i < n; i++)
       // dp[i] = -1;

    cout << answer(n-1);

    return 0;
}
