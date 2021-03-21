#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string n;
ll s, num[15], x;

int main()
{
    onlycc;
    cin >> n;

    x = 1;
    for(int i = 2; i < 15; i+=2)
    {
        num[i] += num[i-2] + 9*x;
        x *= 10;
    }

    s = (int)n.size();
    if(s%2 == 1)
    {
        cout << num[s-1];
    }
    else
    {
        ll ret = num[s-2];
        ll N1 = 0, N2 = 0;
        x = 1;
        for(ll i = s-1; i >= s/2; i--)
        {
            N1 += ll(n[i]-'0')*x;
            x *= 10;
        }

        x = 1;
        for(ll i = s/2-1; i >= 0; i--)
        {
            N2 += ll(n[i]-'0')*x;
            x *= 10;
        }

        if(N2 > N1)
        {
            ret = (N2-1);
        }
        else ret = N2;
        cout << ret;
    }

    return 0;
}
