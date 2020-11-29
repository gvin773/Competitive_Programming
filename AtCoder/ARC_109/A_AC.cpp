#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, x, y;

int main()
{
    onlycc;
    cin >> a >> b >> x >> y;
    if(a == b)
    {
        cout << x;
    }

    else if(a < b)
    {
        int h = b - a;
        int ans = min(h*y+x, x+h*2*x);
        cout << ans;
    }

    else
    {
        int h = a - b;
        int ans = min(y*(h-1)+x, x+2*(h-1)*x);
        cout << ans;
    }

    return 0;
}
