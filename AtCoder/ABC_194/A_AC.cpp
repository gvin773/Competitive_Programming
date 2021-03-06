#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b;

int main()
{
    onlycc;
    cin >> a >> b;

    if(a+b >= 15 && b >= 8) cout << 1;
    else if(a+b >= 10 && b >= 3) cout << 2;
    else if(a+b >= 3) cout << 3;
    else cout << 4;

    return 0;
}
