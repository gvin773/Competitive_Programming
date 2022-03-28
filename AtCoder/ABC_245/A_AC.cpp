#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll a, b, c, d, e;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d;
    if(a*60*60 + b*60 >= c*60*60+d*60+1) cout << "Aoki";
    else cout << "Takahashi";

    return 0;
}
