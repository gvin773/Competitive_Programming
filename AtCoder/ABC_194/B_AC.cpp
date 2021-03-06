#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, a[1000], b[1000], ans = 46464646;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) ans = min(ans, a[i]+b[i]);
            else ans = min(ans, max(a[i], b[j]));
        }
    }

    cout << ans;

    return 0;
}
