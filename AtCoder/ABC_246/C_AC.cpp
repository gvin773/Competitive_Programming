#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, k, x, a[200000], ans;

int main()
{
    onlycc;
    cin >> n >> k >> x;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);

    for(int i = n-1; i >= 0; i--)
    {
        if(k == 0) break;
        if(a[i] < x) break;
        if(a[i] >= k*x)
        {
            a[i] = a[i]- k*x;
            k = 0;
        }
        else
        {
            ll temp = a[i];
            a[i] = a[i]%x;
            k -= (temp - a[i])/x;
        }
    }

    sort(a, a+n);
    for(int i = n-1; i >= 0; i--)
    {
        if(k > 0)
        {
            k--;
            continue;
        }
        ans += a[i];
    }
    cout << ans;

    return 0;
}
