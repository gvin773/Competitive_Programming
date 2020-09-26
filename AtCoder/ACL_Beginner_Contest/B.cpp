#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll a, b, c, d;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d;
    if(c <= a && a <= d) cout << "Yes";
    else if(c <= b && b <= d) cout << "Yes";
    else if(a <= c && c <= b) cout << "Yes";
    else if(a <= d && d <= b) cout << "Yes";
    else cout << "No";

    return 0;
}
