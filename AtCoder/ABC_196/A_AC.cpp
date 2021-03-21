#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, c, d, ans = -500;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d;
    for(int x = a; x <= b; x++)
    {
        for(int y = c; y <= d; y++)
        {
            ans = max(ans, x-y);
        }
    }

    cout << ans;

    return 0;
}
