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

        ll ans = 0;
        if(s.size() % 2)
        {
            if(s[0] > s[s.size()-1])
            {
                for(int i = 0; i < s.size()-1; i++) ans += (s[i]-'a'+1);
                ans -= (s[s.size()-1]-'a'+1);
            }
            else
            {
                for(int i = 1; i < s.size(); i++) ans += (s[i]-'a'+1);
                ans -= (s[0]-'a'+1);
            }
        }
        else
        {
            for(int i = 0; i < s.size(); i++) ans += (s[i]-'a'+1);
        }

        if(ans > 0) cout << "Alice " << ans << '\n';
        else cout << "Bob " << -ans << '\n';
    }

    return 0;
}
