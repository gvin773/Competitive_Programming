#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n, m;
string grid[60];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> grid[i];

        for(int i = n-2; i >= 0; i--)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '*')
                {
                    int k = i+1;
                    bool flag = false;
                    for(k = i+1; k < n; k++)
                    {
                        if(grid[k][j] == '*' || grid[k][j] == 'o')
                        {
                            flag = true;
                            break;
                        }
                    }
                    if(k == n && grid[n-1][j] == '.')
                    {
                        grid[n-1][j] = '*';
                        grid[i][j] = '.';
                    }
                    else if(flag)
                    {
                        grid[k-1][j] = '*';
                        if(k-1 != i) grid[i][j] = '.';
                    }
                }
            }

            //cout << "point\n\n";
            //for(int x = 0; x < n; x++) cout << grid[x] << '\n';
            //cout << '\n\n';
        }

        for(int i = 0; i < n; i++) cout << grid[i] << '\n';
    }

    return 0;
}
