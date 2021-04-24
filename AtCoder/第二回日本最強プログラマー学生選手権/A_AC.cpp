#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

long double x, y, z;

int main()
{
    onlycc;
    cin >> x >> y >> z;
    cout << ceil(y/x*z)-1;

    return 0;
}
