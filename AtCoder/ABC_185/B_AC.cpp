#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, m, t, now, a, b, before;

int main()
{
    onlycc;
    cin >> n >> m >> t;
    now = n;

    before = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        now -= (a-before);
        if(now <= 0)
        {
            cout << "No";
            return 0;
        }
        now += (b-a);
        if(now >= n) now = n;
        before = b;
    }

    now -= (t-before);
    if(now > 0) cout << "Yes";
    else cout << "No";

    return 0;
}
