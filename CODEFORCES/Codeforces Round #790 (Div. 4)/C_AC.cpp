#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, m;
string s[100];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        ll ans = 10e8;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                ll temp = 0;
                for(int k = 0; k < m; k++)
                {
                    temp += abs(s[i][k]-s[j][k]);
                }
                ans = min(temp, ans);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
