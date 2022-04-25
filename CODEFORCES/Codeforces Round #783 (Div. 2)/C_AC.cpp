#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

ll n, a[5000], b[5000], ans = LLONG_MAX;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        ll zero = i, before = 0, ret = 0;
        for(int j = zero+1; j < n; j++)
        {
            ret += (before/a[j]+1);
            before = a[j]*(before/a[j]+1);
        }

        before = 0;
        for(int j = zero-1; j >= 0; j--)
        {
            ret += (before/a[j]+1);
            before = a[j]*(before/a[j]+1);
        }

        ans = min(ans, ret);
    }

    cout << ans;

    return 0;
}
