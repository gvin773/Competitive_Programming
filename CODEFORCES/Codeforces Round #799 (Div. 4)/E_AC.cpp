#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc, n, s, a[200000], d[200020], pl[200020], pr[200020];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s;

        int num = 0, dist = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i])
            {
                d[num++] = dist;
                dist = 0;
            }
            else dist++;
        }
        d[num++] = dist;
        if(num-1 < s)
        {
            cout << -1 << '\n';
            continue;
        }
        if(num-1 == s)
        {
            cout << 0 << '\n';
            continue;
        }

        int target = num-1-s;

        pl[0] = d[0];
        for(int i = 1; i < num; i++) pl[i] = pl[i-1] + d[i];

        pr[0] = d[num-1];
        for(int i = num-2; i >= 0; i--) pr[num-i-1] = pr[num-i-2] + d[i];

        int ans = 987654321;
        for(int L = 0; L <= target; L++)
        {
            int R = target-L;

            int sum = 0;
            if(L > 0) sum += pl[L-1];
            if(R > 0) sum += pr[R-1];

            ans = min(ans, sum+target);
        }
        cout << ans << '\n';
    }

    return 0;
}
