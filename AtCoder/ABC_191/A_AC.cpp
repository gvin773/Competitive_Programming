#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int v, t, s, d;

int main()
{
    onlycc;
    cin >> v >> t >> s >> d;
    int m0 = v*t;
    int m = v*s;
    if(d >= m0 && d <= m) cout << "No";
    else cout << "Yes";

    return 0;
}
