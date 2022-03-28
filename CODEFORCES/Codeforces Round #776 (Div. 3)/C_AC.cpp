#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, m, x, w;

bool compare(pair<pair<ll, ll>, ll> p1, pair<pair<ll, ll>, ll> p2)
{
    return p1.first.second < p2.first.second;
}

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> n >> m;
        vector<pair<pair<ll, ll>, ll>> p; //<w, x>, point number
        for(int i = 0; i < m; i++)
        {
            cin >> x >> w;
            p.push_back(make_pair(make_pair(w, x), i+1));
        }
        sort(p.begin(), p.end());

        auto iter = p.begin();
        for(int i = 0; i < 2*n; i++) iter++;
        sort(p.begin(), iter, compare);

        ll sum = 0;
        for(int i = 0; i < 2*n; i++) sum += p[i].first.first;
        cout << sum << '\n';
        for(int i = 0; i < n; i++)
        {
            cout << p[i].second << ' ' << p[2*n-1-i].second << '\n';
        }
        cout << '\n';
    }

    return 0;
}
