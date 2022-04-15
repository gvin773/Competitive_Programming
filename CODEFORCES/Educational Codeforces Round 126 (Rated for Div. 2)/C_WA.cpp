#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, h[300300];

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> n;

        ll sum = 0, m = -46;
        for(int i = 0; i < n; i++)
        {
            cin >> h[i];
            sum += h[i];
            m = max(m, h[i]);
        }

        if(n == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        ll height = (sum % n) == 0 ? sum/n : sum/n+1;
        height = max(height, m);

        ll dif = height*n - sum;
        cout << dif/3*2 + dif%3 << '\n';
    }

    return 0;
}
