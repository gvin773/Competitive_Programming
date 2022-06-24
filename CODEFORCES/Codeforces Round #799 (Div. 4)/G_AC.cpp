#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, k, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> a[i];

        int num[200020] = {}, cnt = 0, check = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] / a[i+1] < 2)
            {
                num[cnt]++;
                if(check)
                {
                    num[cnt]++;
                    check = 0;
                }
            }
            else
            {
                cnt++;
                check = 1;
            }
        }
        cnt++;

        ll ans = 0;
        for(int i = 0; i < cnt; i++)
        {
            if(num[i] < k+1) continue;
            ans += (num[i] - k);
        }
        cout << ans << '\n';
    }

    return 0;
}
