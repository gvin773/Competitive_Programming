#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll v1[30], v2[30];
bool flag;

int main()
{
    onlycc;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if('a' <= s[i] && s[i] <= 'z') v1[s[i]-'a']++;
        else v2[s[i]-'A']++;
    }

    for(int i = 0; i < 30; i++)
    {
        if(v1[i] > 1 || v2[i] > 1)
        {
            cout << "No";
            flag = true;
            break;
        }
    }
    sort(v1, v1+30);
    sort(v2, v2+30);

    if(!flag)
    {
        if(v1[29] == 0 || v2[29] == 0) cout << "No";
        else cout << "Yes";
    }

    return 0;
}
