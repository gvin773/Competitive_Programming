/*#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[20], ans = 987654321;
vector<ll> v1, v2;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) v2.push_back(a[i]);

    if(n == 1)
    {
        cout << a[0];
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        v1.push_back(a[i]);
        v2.erase(v2.begin());

        ll ret1 = 0, ret2 = 0;
        for(int j = 0; j < v1.size(); j++)
        {
            ret1 = ret1 | v1[j];
        }
        for(int j = 0; j < v2.size(); j++)
        {
            ret2 = ret2 | v2[j];
        }

        ans = min(ans, ret1 ^ ret2);
    }

    cout << ans;

    return 0;
}
*/
