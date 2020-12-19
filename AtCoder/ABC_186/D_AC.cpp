#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n;
ll a[200000];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    ll sum = 0;
    for(int i = n-1; i >= 0; i--)
        sum += (i*a[i] - (n-1-i)*a[i]);

    cout << sum;

    return 0;
}
