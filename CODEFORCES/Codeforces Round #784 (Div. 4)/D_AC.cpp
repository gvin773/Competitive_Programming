#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n;
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s;

        bool flag = false, visited[2] = {};
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'W')
            {
                if(((visited[0]) && (!visited[1])) || ((!visited[0]) && (visited[1])))
                {
                    cout << "NO\n";
                    flag = true;
                    break;
                }

                visited[0] = visited[1] = false;
            }
            else
            {
                if(s[i] == 'R') visited[0] = true;
                else visited[1] = true;
            }
        }

        if(!flag)
        {
            if(visited[0] ^ visited[1]) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}
