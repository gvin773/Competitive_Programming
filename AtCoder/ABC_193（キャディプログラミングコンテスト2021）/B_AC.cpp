#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a, p, x, ans = 10e9+1;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> p >> x;
        if(x-a > 0) ans = min(ans, p);
    }

    cout << ((ans == 10e9+1) ? -1 : ans);

    return 0;
}
