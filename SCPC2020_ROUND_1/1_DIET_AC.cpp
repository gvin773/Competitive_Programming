#define onlycc ios_base::sync_with_stdio(0);cin.tie(0)
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int t, n, k;

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a[200000], b[200000];
        cin >> n >> k;
        for(int j = 0; j < n; j++)
            cin >> a[j];

        for(int j = 0; j < n; j++)
            cin >> b[j];

        sort(a, a+n);
        sort(b, b+n);

        int starta = 0, startb = 0, lasta = k-1, lastb = k-1, ans = 0;
        for(int j = 0; j < k; j++)
        {
            if(a[starta] <= b[startb])
            {
                ans = max(ans, a[starta]+b[lastb]);
                lastb--;
                starta++;
            }

            else
            {
                ans = max(ans, b[startb]+a[lasta]);
                lasta--;
                startb++;
            }
        }

        cout << "Case #" << i+1 << '\n' << ans << '\n';
    }

    return 0;
}
