#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k, ans, num[30];
string s[15];

void solve(int now)
{
    if(now == n)
    {
        ll temp = 0;
        for(int i = 0; i < 30; i++)
            if(num[i] == k) temp++;
        ans = max(ans, temp);
        return;
    }

    for(int i = 0; i < s[now].size(); i++) num[s[now][i]-'a']++;
    solve(now+1);

    for(int i = 0; i < s[now].size(); i++) num[s[now][i]-'a']--;
    solve(now+1);
}

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> s[i];
    solve(0);
    cout << ans;

    return 0;
}
