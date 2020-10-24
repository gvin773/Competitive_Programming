#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll ipow(ll a, ll b)
{
    if(b == 0) return 1;

    ll ans = ipow(a, b/2);
    ans *= ans;

    if(b%2 == 1) ans *= a;

    return ans;
}

int n, m, a[200001], b[200001];

int main()
{
    onlycc;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    dsu g(n+1);
    for(int i = 0; i < m; i++)
    {
        int c, d;
        cin >> c >> d;
        g.merge(c, d);
    }

    vector<vector<int>> v = g.groups();
    bool check = false;
    for(int i = 1; i < v.size(); i++)
    {
        ll sum = 0;
        for(int j = 0; j < v[i].size(); j++)
        {
            int in = v[i][j];
            sum += (a[in]-b[in]);
        }

        if(sum != 0)
        {
            check = true;
            break;
        }
    }

    if(check) cout << "No";
    else cout << "Yes";

    return 0;
}
