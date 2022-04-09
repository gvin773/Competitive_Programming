#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, ans = 1000000000000000000;

int main()
{
    onlycc;
    cin >> n;
    if(n == 0)
    {
        cout << 0;
        exit(0);
    }
    for(ll a = 0; a <= 1000000; a++)
    {
        ll lo = 0, hi = 1000001;
        while(lo+1 < hi)
        {
            ll b = (lo+hi) / 2;
            ll f = (a+b)*(a*a+b*b);

            if(f >= n)
            {
                hi = b;
                ans = min(ans, f);
            }
            else lo = b;
        }
    }

    cout << ans;

    return 0;
}
