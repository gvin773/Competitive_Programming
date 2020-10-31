#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, k, ans;

int main()
{
    onlycc;
    cin >> n >> k;

    k = abs(k);
    for(ll i = 2; i <= 2*n; i++)
    {
        ll left = min((i-1), n-(i-n-1));
        ll right;
        if(i-k>=2 && i-k<=2*n) right = min((i-k-1), n-(i-k-n-1));
        else right = 0;
        ans += left*right;
    }

    cout << ans;

    return 0;
}
