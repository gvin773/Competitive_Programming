#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll a, b, c, d, e, f;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d >> e >> f;
    if(a == c)
    {
        cout << e << ' ';
        if(b == d) cout << f;
        else if(b == f) cout << d;
        else if(d == f) cout << b;
    }
    else if(a == e)
    {
        cout << c << ' ';
        if(b == d) cout << f;
        else if(b == f) cout << d;
        else if(d == f) cout << b;
    }
    else
    {
        cout << a << ' ';
        if(b == d) cout << f;
        else if(b == f) cout << d;
        else if(d == f) cout << b;
    }

    return 0;
}
