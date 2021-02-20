/*#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string x;
ll m, d, cnt;

int change(int b)
{
    ll ret = 0, power = x.size()-1;
    for(int i = 0; i < x.size(); i++)
    {
        ret += (x[i]-'0') * pow(b, power--);
    }

    return ret;
}

int main()
{
    onlycc;
    cin >> x >> m;
    for(int i = 0; i < x.size(); i++)
    {
        if(d == 9) break;
        d = max(d, ll(x[i]-'0'));
    }
   // X = stoi(x);

    for(int i = d+1; ; i++)
    {
        if(change(i) <= m) cnt++;
        else break;
    }

    cout << cnt;

    return 0;
}*/
