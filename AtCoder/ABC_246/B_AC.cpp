#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

long double a, b, c, d, e, f;

int main()
{
    onlycc;
    cin >> a >> b;
    if(a == 0) cout << 0 << ' ' << 1;
    else if(b == 0) cout << 1 << ' ' << 0;
    else
    {
        cout << a / sqrt(a*a+b*b) << ' ' << b / sqrt(a*a+b*b);
    }

    return 0;
}
