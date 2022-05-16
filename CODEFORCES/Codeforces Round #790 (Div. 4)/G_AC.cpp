#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, p[5000], ans;
string s;

int dfs(int now, vector<int> const (&v)[5000])
{
    if(v[now].empty()) return (s[now] == 'W' ? 1 : -1);

    int lo = 0;
    for(int i = 0; i < v[now].size(); i++)
    {
        lo += dfs(v[now][i], v);
    }
    if(s[now] == 'W') lo += 1;
    else lo -= 1;

    if(lo == 0) {ans++;}
    return lo;
}

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector<int> v[5000];
        for(int i = 2; i <= n; i++)
        {
            cin >> p[i];
            v[p[i]].push_back(i);
        }
        s = "0";
        string temp;
        cin >> temp;
        s = s + temp;

        ans = 0;
        dfs(1, v);
        cout << ans << '\n';
    }

    return 0;
}
