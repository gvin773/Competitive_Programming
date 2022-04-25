#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t;
string s;

int main()
{
    onlycc;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(int(s.size()) < 2) cout << "NO\n";
        else if(s.size() == 2)
        {
            if(s == "AB") cout << "YES\n";
            else cout << "NO\n";
        }
        else if(s[0] == 'B' || s[s.size()-1] == 'A') cout << "NO\n";
        else
        {
            char before = s[0];
            vector<char> v;
            for(int i = 0; i < s.size(); i++)
            {
                if(before == 'A' && s[i] == 'B') v.push_back('A');
                else if(before == 'B' && s[i] == 'A') v.push_back('B');
                before = s[i];
            }
            v.push_back(before);

            stack<char> Stack;
            bool flag = false;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == 'A') Stack.push('A');
                else if(!Stack.empty()) Stack.pop();
                else
                {
                    cout << "NO\n";
                    flag = true;
                    break;
                }
            }
            if(!flag) cout << "YES\n";
        }
    }

    return 0;
}
