#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int r1, c1, r2, c2, ret, cnt;

int get(int d)
{
    int t = 0, r;
    r = d/10;
    if(r != 0) t += 2;
    r = d%10;
    if(r == 0) cnt = 1;

    int r2 = r/3;
    t += r2;
    r2 = r%3;
    if(r2 != 0) t++;

    return t;
}

int main()
{
    onlycc;
    cin >> r1 >> c1 >> r2 >> c2;
    if(r1 == c1 && r2 == c2)
    {
        cout << 0;
        return 0;
    }

    ll d1 = r2 - r1 + c2 - c1;
    ret = get(abs(d1));

    ll d2 = r1 - r2 + c2 - c1;
    ret = min(ret, get(abs(d2)));

    ll d3 = r2 + c2 - c1 - r1;
    ret = min(ret, get(abs(d3)));

    ll d4 = c1 + r2 - c2 - r1;
    ret = min(ret, get(abs(d4)));

    cout << ret;

    return 0;
}
