#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int m, h;

int main()
{
    onlycc;
    cin >> m >> h;
    if(h%m == 0) cout << "Yes";
    else cout << "No";

    return 0;
}
