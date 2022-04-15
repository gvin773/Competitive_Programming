#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t, n, a[25], b[25];

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        ll ans = 0;
        for(int i = 0; i < n-1; i++)
        {
            ll x = (ll)abs(a[i]-a[i+1]) + (ll)abs(b[i]-b[i+1]);
            ll y = (ll)abs(a[i]-b[i+1]) + (ll)abs(b[i]-a[i+1]);
            if(x > y) ans += y;
            else ans += x;
        }

        cout << ans << '\n';
    }

    return 0;
}
