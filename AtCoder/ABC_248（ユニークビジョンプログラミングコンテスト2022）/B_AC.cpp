#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll a, b, k, cnt;

int main()
{
    onlycc;
    cin >> a >> b >> k;
    while(1)
    {
        if(a >= b) break;
        a *= k;
        cnt++;
    }
    cout << cnt;

    return 0;
}
