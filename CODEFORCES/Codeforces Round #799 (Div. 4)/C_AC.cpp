#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, r, c;
string s[10];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        for(int i = 0; i < 8; i++) cin >> s[i];

        for(int i = 0; i < 6; i++)
        {
            for(int j = 0; j < 6; j++)
            {
                if(s[i][j]=='#'&&s[i][j+1]=='.'&&s[i][j+2]=='#'
                   &&s[i+1][j]=='.'&&s[i+1][j+1]=='#'&&s[i+1][j+2]=='.'
                   &&s[i+2][j]=='#'&&s[i+2][j+1]=='.'&&s[i+2][j+2]=='#')
                {
                    r = i+1, c = j+1;
                    goto xy;
                }
            }
        }
        xy: cout << r+1 << ' ' << c+1 << '\n';
    }

    return 0;
}
