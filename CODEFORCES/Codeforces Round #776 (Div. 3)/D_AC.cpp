#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n;

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        ll a[2001], d[2001];
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];

        bool flag = true;
        for(int i = n; i >= 1; i--)
        {
            ll temp[2001];
            for(int j = 1; j <= i; j++)
            {
                if(i == a[j])
                {
                    flag = false;
                    if(j == i)
                    {
                        d[i] = 0;
                        break;
                    }
                    else d[i] = j;

                    ll cnt = 0;
                    for(int k = j+1; k <= i; k++)
                    {
                        cnt++;
                        temp[cnt] = a[k];
                    }
                    for(int k = 1; k < j; k++)
                    {
                        cnt++;
                        temp[cnt] = a[k];
                    }

                    for(int k = 1; k < i; k++) a[k] = temp[k];
                    a[i] = i;

                    break;
                }
            }

            if(flag) break;
        }

        if(flag) cout << -1 << '\n';
        else
        {
            for(int i = 1; i <= n; i++) cout << d[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
