#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
string t;

int main()
{
    onlycc;
    cin >> n >> t;

    if(t.find("00") != string::npos || t.find("010") != string::npos || t.find("111") != string::npos)
    {
        cout << 0;
        return 0;
    }

    if(t.size() == 1)
    {
        if(t == "1") cout << 20000000000;
        else cout << 10000000000;
        return 0;
    }

    if(t.size() == 2)
    {
        if(t == "01") cout << 10000000000 - 1;
        else cout << 10000000000;
        return 0;
    }

    if(t.size() == 3)
    {
        if(t == "110") cout << 10000000000;
        else if(t == "101" || t == "011") cout << 10000000000 - 1;
        else cout << 0;
        return 0;
    }

    int r = t.size()%3;

    if(r == 0)
    {
        if(t.substr(0, 3) == "110") cout << 10000000000 - t.size()/3 + 1;
        else if(t.substr(0, 3) == "101" || t.substr(0, 3) == "011") cout << 10000000000 - t.size()/3;
        else cout << 0;
    }

    else if(r == 1)
    {
        if(t.substr(0, 3) == "110" || t.substr(0, 3) == "101" || t.substr(0, 3) == "011")cout << 10000000000 - t.size()/3;
        else cout << 0;
    }

    else
    {
        if(t.substr(0, 3) == "011") cout << 10000000000 - t.size()/3 - 1;
        else if(t.substr(0, 3) == "110" || t.substr(0, 3) == "101") cout << 10000000000 - t.size()/3;
        else cout << 0;
    }

    return 0;
}
