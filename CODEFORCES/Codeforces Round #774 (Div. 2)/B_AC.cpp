#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, a[200001];

int main()
{
    onlycc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        cin >> n;
        ll sum = 0;
        a[0] = -4646;
        for(int j = 1; j <= n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        sort(a, a+n+1);

        ll blue = 0;
        if(n%2 == 1)
        {
            for(int j = 1; j <= n/2+1; j++)
            {
                blue += a[j];
            }
        }
        else
        {
            for(int j = 1; j <= n/2; j++)
            {
                blue += a[j];
            }
            sum -= a[n/2+1];
        }
        if(sum - blue > blue) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
