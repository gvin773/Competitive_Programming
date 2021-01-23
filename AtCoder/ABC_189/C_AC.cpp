#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[10000], x, ans;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        x = a[i];
        for(int j = i; j < n; j++)
        {
            x = min(x, a[j]);
            ans = max(ans, x*(j-i+1));
        }
    }

    cout << ans;
    return 0;
}
