#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll l, arr[300][30];

ll c(int n, int r)
{
    if(arr[n][r] != 0) return arr[n][r];
    if(n == r || r == 0) return arr[n][r] = 1;
    arr[n][r] = c(n-1, r-1) + c(n-1, r);

    return arr[n][r];
}

int main()
{
    onlycc;
    cin >> l;
    cout << c(l-1, 11);

    return 0;
}
