#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string s;
bool v[10];

int main()
{
    onlycc;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        v[s[i]-'0'] = true;
    }
    for(int i = 0; i < 10; i++) if(!v[i]) cout << i;

    return 0;
}
