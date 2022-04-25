#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, a[200000], ans;
map<ll, ll> m;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    for(int i = 0; i < n; i++) m[a[i]]++;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ll mul = a[i]*a[j];
            if(m.find(mul) != m.end()) ans += m[mul];
            if(mul > a[n-1]) break;
        }
    }
    cout << ans;

    return 0;
}
