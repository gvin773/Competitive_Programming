#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[300001];
ll ans, sum;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sum -= a[0];
    for(int i = 0; i < n; i++)
    {
        ans += (n-1)*a[i]*a[i];
        if(i != n-1)
        {
            ans -= 2*a[i]*sum;
            sum -= a[i+1];
        }
    }

    cout << ans;

    return 0;
}
