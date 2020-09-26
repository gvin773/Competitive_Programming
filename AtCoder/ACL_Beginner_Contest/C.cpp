#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, m;

int main()
{
    onlycc;
    cin >> n >> m;
    dsu d(n+1);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        d.merge(a, b);
    }

    vector<vector<int>> ret = d.groups();
    cout << ret.size()-2;

    return 0;
}
