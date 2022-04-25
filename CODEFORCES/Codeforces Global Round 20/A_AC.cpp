#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, a[50];

int main()
{
    onlycc;
    cin >> t;
    while(t--)
    {
        cin >> n;

        ll s = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += (a[i]-1);
        }

        if(s & 1) cout << "errorgorn\n";
        else cout << "maomao90\n";
    }

    return 0;
}
