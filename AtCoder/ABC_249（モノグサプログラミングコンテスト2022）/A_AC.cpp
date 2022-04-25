#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a, b, c, d, e, f, x, T, A;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d >> e >> f >> x;

    ll now = 1, left = x;
    while(left)
    {
        if(now)
        {
            T += b*min(left, a);
            left -= min(left, a);
        }
        else
        {
            left -= min(left, c);
        }
        now = !now;
    }

    now = 1, left = x;
    while(left)
    {
        if(now)
        {
            A += e*min(left, d);
            left -= min(left, d);
        }
        else
        {
            left -= min(left, f);
        }
        now = !now;
    }

    if(T > A) cout << "Takahashi";
    else if(T < A) cout << "Aoki";
    else cout << "Draw";

    return 0;
}
