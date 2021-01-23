#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x, v[1000], p[1000], ans;

int main()
{
    onlycc;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i] >> p[i];
    }

    x *= 100;
    for(int i = 0; i < n; i++)
    {
        x -= v[i]*p[i];
        if(x < 0)
        {
            ans = i+1;
            break;
        }
    }

    if(x >= 0) cout << -1;
    else cout << ans;

    return 0;
}
