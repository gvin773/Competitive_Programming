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
    for(ll tc = 0; tc < t; tc++)
    {
        cin >> s;
        int ans = 0;
        stack<char> Stack;
        bool check[26] = {};

        for(int i = 0; i < s.size(); i++)
        {
            if(!check[s[i]-'a'])
            {
                Stack.push(s[i]);
                check[s[i]-'a'] = true;
            }
            else
            {
                while(!Stack.empty())
                {
                    check[Stack.top()-'a'] = false;
                    Stack.pop();
                    ans++;
                }
                ans--;
                //Stack.pop();
                check[s[i]-'a'] = false;
            }
            //cout << "i: " << i << ' ' << "ans: " << ' ' << ans << endl;
        }

        while(!Stack.empty())
        {
            Stack.pop();
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
