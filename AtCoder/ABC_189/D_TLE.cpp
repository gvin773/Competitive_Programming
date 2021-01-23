#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
string s[70];

int check(int now, bool y)
{
    bool y1, y2;

    if(s[now] == "OR")
    {
        y1 = y || 0;
        y2 = y || 1;
    }
    else
    {
        y1 = y && 0;
        y2 = y && 1;
    }

    int ret = 0;
    if(now == n)
    {
        ret += y1;
        ret += y2;
    }
    else
    {
        ret += (check(now+1, y1) + check(now+1, y2));
    }

    return ret;
}

int main()
{
    onlycc;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    cout << check(1, true) + check(1, false);

    return 0;
}
