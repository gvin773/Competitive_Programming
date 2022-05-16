#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, a, b, c, x, y;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b >> c >> x >> y;
        x -= a;
        y -= b;
        if(x <= 0 && y <= 0)
        {
            cout << "YES\n";
            continue;
        }
        if(x > 0)
        {
            ll temp = x > c ? c : x;
            x -= temp;
            c -= temp;
        }
        if(y > 0 && c > 0)
        {
            ll temp = y > c ? c : y;
            y -= temp;
            c -= temp;
        }
        if(x <= 0 && y <= 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
