#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, k;

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < k; i++)
    {
        if(n%200 == 0) n /= 200;
        else n = (n*1000+200);
    }

    cout << n;

    return 0;
}
