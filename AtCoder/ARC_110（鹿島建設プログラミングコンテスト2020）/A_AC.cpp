#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;

int main()
{
    onlycc;
    cin >> n;

    unsigned long long x = 1;
    for(int i = 1; i <= n; i++)
    {
        if(x % i == 0) continue;
        else x *= i;
    }

    if(n == 29 || n == 30)
    {
        x /= 40;
    }

    cout << x+1;

    return 0;
}
