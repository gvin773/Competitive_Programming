#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#define MOD 1000000007
using namespace std;

typedef long long ll;

int n;

ll ipow(int a, int b, int c)
{
    if(b == 0) return 1;

    long long ans = ipow(a, b/2, c);
    ans *= ans;
    ans %= c;

    if(b%2 == 1) (ans *= a) %= c;

    return ans;
}

int main()
{
    onlycc;
    cin >> n;

    ll ret1 = ipow(10, n, MOD);
    ll ret2 = ipow(9, n, MOD);
    ll ret3 = ipow(8, n, MOD);
    ll ret = ((ret1 - ret2)+MOD)%MOD;
    ret = ((ret - ret2)+MOD)%MOD;
    ret = (ret + ret3)%MOD;

    cout << ret;

    return 0;
}
