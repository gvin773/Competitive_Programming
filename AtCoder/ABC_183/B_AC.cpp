#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll s[2], g[2];

int main()
{
    onlycc;
    cin >> s[0] >> s[1] >> g[0] >> g[1];

    cout.setf(ios::fixed);
    cout.precision(10);
    cout << (s[1]*g[0]+g[1]*s[0])/(long double)(s[1]+g[1]);

    return 0;
}
