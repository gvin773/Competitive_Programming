#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int x, y;

int main()
{
    onlycc;
    cin >> x >> y;
    if(x > y)
    {
        if(y+3 > x) cout << "Yes";
        else cout << "No";
    }

    else
    {
        if(x+3 > y) cout << "Yes";
        else cout << "No";
    }

    return 0;
}
