#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, a, b;
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s;

        char before = s[0];
        int cnta = 0, cntb = 0, flag = 0;

        if(before == 'a') cnta++;
        else cntb++;
        for(int i = 1; i < s.size(); i++)
        {
            if(before == 'a')
            {
                before = s[i];
                if(s[i] == 'a') cnta++;
                else
                {
                    if(cnta == 1)
                    {
                        cout << "NO\n";
                        flag = 1;
                        break;
                    }
                    cnta = 0;
                    cntb++;
                }
            }
            else
            {
                before = s[i];
                if(s[i] == 'b') cntb++;
                else
                {
                    if(cntb == 1)
                    {
                        cout << "NO\n";
                        flag = 1;
                        break;
                    }
                    cntb = 0;
                    cnta++;
                }
            }
        }

        if(!flag)
        {
            if(s.size() == 1 || (cnta == 1 || cntb == 1)) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}
