#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, m, a[300][300];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        ll ans = 0;
        for(int x = 0; x < n; x++)
        {
            for(int y = 0; y < m; y++)
            {
                ll temp = 0, i = x, j = y;
                while(!(i == n || j == m))
                {
                    temp += a[i][j];
                    i++, j++;
                }

                i = x, j = y;
                while(!(i == -1 || j == -1))
                {
                    temp += a[i][j];
                    i--, j--;
                }

                i = x, j = y;
                while(!(i == -1 || j == m))
                {
                    temp += a[i][j];
                    i--, j++;
                }

                i = x, j = y;
                while(!(i == n || j == -1))
                {
                    temp += a[i][j];
                    i++, j--;
                }
                temp -= (3*a[x][y]);
                ans = max(ans, temp);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
