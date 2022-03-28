#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[2000], m = -10;
int v[2001];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] >= 0) v[a[i]] = 1;
    }
    for(int i = 0; i <= 2000; i++)
    {
        if(!v[i])
        {
            cout << i;
            break;
        }
    }

    return 0;
}
