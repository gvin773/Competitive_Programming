#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
string s;
char c;

bool solve(string x)
{
    bool flag = true;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == c)
        {
            flag = false;
            break;
        }
    }
    if(flag) return false;

    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == c)
        {
            if(i%2 == 0 && (x.size()-i-1)%2 == 0) return true;
        }
    }
    return false;
}

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> s >> c;
        if(solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
