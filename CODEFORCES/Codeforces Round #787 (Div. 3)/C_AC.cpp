#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n;
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s;

        ll start = 0, fin = 0;
        bool f1 = false, f2 = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                start = i;
                f1 = true;
                f2 = false;
            }
            if(s[i] == '0' && !f2)
            {
                fin = i;
                f2 = true;
            }
        }
        if(!f1 && !f2) cout << s.size() << '\n';
        else if(!f1 && f2) cout << fin+1 << '\n';
        else if(f1 && !f2) cout << s.size()-start << '\n';
        else cout << fin-start+1 << '\n';
    }

    return 0;
}
