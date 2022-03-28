#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, k, a[200000], b[200000];
bool A[200000], B[200000];

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    A[0] = B[0] = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(A[i])
        {
            if(abs(a[i] - a[i+1]) <= k) A[i+1] = true;
            if(abs(a[i] - b[i+1]) <= k) B[i+1] = true;
        }
        if(B[i])
        {
            if(abs(b[i] - a[i+1]) <= k) A[i+1] = true;
            if(abs(b[i] - b[i+1]) <= k) B[i+1] = true;
        }
    }

    if(A[n-1] || B[n-1]) cout << "Yes";
    else cout << "No";

    return 0;
}
