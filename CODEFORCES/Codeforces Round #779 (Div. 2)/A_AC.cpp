#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t, n;
string s;

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        int num[2] = {}, ans = 0;
        cin >> n;
        cin >> s;
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == '0' && s[i+1] == '0')
            {
                ans += 2;
            }
            else if(s[i] == '0' && s[i+1] == '1' && i+2 < s.size() && s[i+2] == '0')
            {
                ans++;
            }
            else if(s[i] == '1' && s[i+1] == '0' && i+2 < s.size() && s[i+2] == '0')
            {
                ;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
