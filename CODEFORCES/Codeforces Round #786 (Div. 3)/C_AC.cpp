#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc;
string s, t;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s >> t;

        int cnt = s.size();
        bool check = false;
        for(char x : t)
        {
            if(x == 'a') check = true;
        }
        if(check && t.size() > 1) cout << -1 << '\n';
        else if(check && t.size() == 1) cout << 1 << '\n';
        else cout << (ll)pow(2, cnt) << '\n';
    }

    return 0;
}
