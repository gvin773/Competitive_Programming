#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, m, a[200020], d, ret;

int main()
{
    onlycc;
    cin >> n >> m;
    d = n;
    for(int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a+m);
    ll from = 0;
    for(int i = 0; i < m; i++)
    {
        ll x = a[i] - from - 1;
        if(x != 0) d = min(d, x);
        from = a[i];
    }
    if(n - from != 0) d = min(d, n - from);

    if(d == 0)
    {
        cout << 0;
        return 0;
    }

    if(m == 0)
    {
        cout << 1;
        return 0;
    }

    from = 0;
    for(int i = 0; i < m; i++)
    {
        ret += (a[i] - from - 1) / d;
        if((a[i] - from - 1) % d != 0) ret++;
        from = a[i];
    }

    if(m > 1 && a[m-1] != n)
    {
        ret += (n - from) / d;
        if((n - from) % d != 0) ret++;
    }

    cout << ret;
    return 0;
}
