#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc;
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s;

        int cnt = 0;
        for(int i = 'a'; i <= 'z'; i++)
        {
            for(int j = 'a'; j <= 'z'; j++)
            {
                if(i == j) continue;
                cnt++;
                if(s[0] == i && s[1] == j)
                {
                    cout << cnt << '\n';
                    goto xy;
                }
            }
        }
        xy:;
    }

    return 0;
}
