#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[200000], b[200000];
ll d, ans, sum[200000];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        d -= a[i];
        sum[i] = 2*a[i] + b[i];
    }

    sort(sum, sum+n);
    ll s = 0;
    for(int i = n-1; i >= 0; i--)
    {
        s += sum[i];
        ans++;
        if(s > -1*d) break;
    }

    cout << ans;

    return 0;
}
