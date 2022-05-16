#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, a[100];
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        ll m = 10e9;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = min(m, a[i]);
        }

        ll ans = 0;
        for(int i = 0; i < n; i++) ans += (a[i]-m);
        cout << ans << '\n';
    }

    return 0;
}
