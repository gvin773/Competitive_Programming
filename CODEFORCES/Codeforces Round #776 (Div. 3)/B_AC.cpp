#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll l, r, a, t;

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> l >> r >> a;

        ll fz, zero, ans = 0, start = 0;
        if(r-l > r%a - l%a)
        {
            fz = l + a - (l%a);
            ll d = (r - fz) / a;
            zero = fz + d*a;

            ans = max(zero/a + zero%a, (zero-1)/a + (zero-1)%a);
            zero = zero-1+a;
            if(zero <= r) ans = max(ans, zero/a + zero%a);

            cout << ans << '\n';
        }
        else cout << r/a + r%a << '\n';
    }

    return 0;
}
