#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x;
string s;

int main()
{
    onlycc;
    cin >> n >> x >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'o') x++;
        else x--;

        if(x < 0) x = 0;
    }

    cout << x;

    return 0;
}
