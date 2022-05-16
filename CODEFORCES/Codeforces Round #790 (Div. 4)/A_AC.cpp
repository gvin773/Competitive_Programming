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

        ll sum = 0;
        for(int i = 0; i < 3; i++) sum += (s[i]-'0');
        for(int i = 3; i < 6; i++) sum -= (s[i]-'0');
        if(sum) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
