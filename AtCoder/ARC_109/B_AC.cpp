#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n;

int main()
{
    onlycc;
    cin >> n;

    ll lo = 1, hi = 10e9;
    while(lo <= hi)
    {
        ll mid = (lo+hi) / 2;
        if(lo == mid) break;
        if((long double)mid*(mid+1)/(double)2 - 1 <= n) lo = mid;
        else hi = mid;
    }

    cout << n-lo+1;

    return 0;
}
