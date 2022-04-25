#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n, w[200000], a[200000], b[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> w[i];
            if(i == 0) a[i] = w[i];
            else a[i] = a[i-1] + w[i];
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(i == n-1) b[i] = w[i];
            else b[i] = b[i+1] + w[i];
        }

        ll ans = 0, l = 0, r = n-1;
        while(l < r)
        {
            if(a[l] == b[r]) ans = max(ans, l+1 + n-r);
            if(a[l] < b[r]) l++;
            else r--;
        }

        cout << ans << '\n';
    }

    return 0;
}
