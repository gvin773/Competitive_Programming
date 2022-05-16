#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc, n, p[200001], cnt;
queue<int> ans;

void dfs(int now, vector<int> v[], vector<int> ret[])
{
    ans.push(now);
    if(v[now].empty())
    {
        ret[cnt].push_back(ans.size());
        while(!ans.empty())
        {
            ret[cnt].push_back(ans.front());
            ans.pop();
        }
        cnt++;
        return;
    }
    for(int i : v[now])
    {
        dfs(i, v, ret);
    }
}

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        int start = 0;
        vector<int> v[n+1];
        vector<int> ret[n+1];

        for(int i = 1; i <= n; i++)
        {
            cin >> p[i];
            if(i != p[i]) v[p[i]].push_back(i);
            else start = i;
        }

        cnt = 0;
        dfs(start, v, ret);
        cout << cnt << '\n';
        for(int i = 0; i < cnt; i++)
        {
            for(int x = 0; x < ret[i].size(); x++)
            {
                if(x == 0) cout << ret[i][0] << '\n';
                else cout << ret[i][x] << ' ';
            }
            cout << '\n';
        }
        cout << '\n' << '\n';
    }

    return 0;
}
