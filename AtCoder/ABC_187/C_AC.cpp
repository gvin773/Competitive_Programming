#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
string str;
set<string> s1, s2;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        if(str[0] == '!') s1.insert(str.substr(1));
        else s2.insert(str);
    }

    for(auto i = s1.begin(); i != s1.end(); i++)
    {
        if(s2.find(*i) != s2.end())
        {
            cout << *i;
            return 0;
        }
    }

    cout << "satisfiable";

    return 0;
}
