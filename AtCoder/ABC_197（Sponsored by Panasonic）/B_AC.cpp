#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int h, w, x, y, ans;
string s[101];

int main()
{
    onlycc;
    cin >> h >> w >> x >> y;
    y--;
    for(int i = 1; i <= h; i++) cin >> s[i];
    for(int i = x-1; 0 < i && s[i][y] == '.'; i--)
    {
        ans++;
    }
    for(int i = x+1; i <= h && s[i][y] == '.'; i++)
    {
        ans++;
    }
    for(int i = y-1; 0 <= i && s[x][i] == '.'; i--)
    {
        ans++;
    }
    for(int i = y+1; i < w && s[x][i] == '.'; i++)
    {
        ans++;
    }
    if(s[x][y] == '.') cout << ans+1;
    else cout << ans;

    return 0;
}
