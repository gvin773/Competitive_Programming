#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a[100], b[100], n, x, y = 999999;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++)
    {
        x = max(x, a[i]);
        y = min(y, b[i]);
    }
    if(x > y) cout << 0;
    else cout << y-x+1;

    return 0;
}
