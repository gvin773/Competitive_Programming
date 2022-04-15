#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
string s[100], t[100];
map<string, int> m;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i] >> t[i];
        m[s[i]]++;
        m[t[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(m[s[i]] > 1 && m[t[i]] > 1 && s[i] != t[i])
        {
            cout << "No";
            exit(0);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(s[i] == t[i] && (s[i] == t[j]) && (s[i] == s[j]))
            {
                cout << "No";
                exit(0);
            }
        }
    }
    cout << "Yes";

    return 0;
}
