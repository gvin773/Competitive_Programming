#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, x, a[200000], L[200000], s[200000], ans;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> x;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);
        s[0] = a[0];
        for(int i = 0; i < n; i++)
        {
            if(i != 0) s[i] = s[i-1] + a[i];
            L[i] = max(x-s[i]+1, (ll)0);
        }

        ll num = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] <= x) num = i;
        }

        ans = (num+1) * L[0];
        for(int i = 1; i < n; i++)
        {
            //x >= s[i]+(x-1)*(i+1) ?

            ll lo = 1, hi = L[0];
            if(hi == 0 || s[i] > x) break;
            while(lo+1 < hi)
            {
                ll mid = (lo+hi)/2;

                ll amount = s[i]+(mid-1)*(i+1);
                if(amount <= x) lo = mid;
                else hi = mid;
            }

            ans -= (L[0]-lo);
        }
        cout << ans << '\n';
    }

    return 0;
}

