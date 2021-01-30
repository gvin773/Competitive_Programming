#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, divisor[10000000], cnt, ans, x, sum;

int main()
{
    onlycc;
    cin >> n;

    for(ll i = 2; i <= sqrt(2*n); i++)
    {
        if((2*n)%i == 0)
        {
            divisor[cnt] = i;
            cnt++;
            divisor[cnt] = 2*n/i;
            cnt++;
        }
    }
    divisor[cnt] = 2*n;
    cnt++;

    for(ll i = 0; i < cnt; i++)
    {
        x = divisor[i];
        sum = 2*n/x;
        if((sum-x+1) % 2 == 0) ans++;
    }

    cout << ans + 1;

    return 0;
}
