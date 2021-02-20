#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, m, x, y, a, b, t, k;
ll ans = LLONG_MAX;
vector<pair<int, pair<int, int>>> v[100001]; //des, t, k
queue<pair<ll, ll>> q; //now, time_now

void bfs()
{
    q.push({x, 0});

    while(!q.empty())
    {
        int Size = q.size();
        for(int i = 0; i < Size; i++)
        {
            pair<ll, ll> now = q.front();
            q.pop();

            if(now.first == y)
            {
                ans = min(ans, now.second);
                continue;
            }
            else if(ans <= now.second) continue;

            for(int j = 0; j < v[now.first].size(); j++)
            {
                pair<int, pair<int, int>> next = v[now.first][j];
                if(now.second == 0)
                {
                    q.push({next.first, next.second.first});
                }

                else if(now.second > next.second.second && now.second % next.second.second == 0)
                {
                    q.push({next.first, now.second + next.second.first});
                }

                else if(now.second <= next.second.second)
                {
                    q.push({next.first, next.second.second+next.second.first});
                }
            }
        }
    }
}

int main()
{
    onlycc;
    cin >> n >> m >> x >> y;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> t >> k;
        v[a].push_back({b, {t, k}});
        v[b].push_back({a, {t, k}});
    }

    bfs();
    if(ans == LLONG_MAX) cout << -1;
    else cout << ans;

    return 0;
}
