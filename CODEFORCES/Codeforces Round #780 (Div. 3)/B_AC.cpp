#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, a[200000], fir, sec;

int main()
{
    onlycc;
    cin >> t;
    for(ll tc = 0; tc < t; tc++)
    {
        cin >> n;
        fir = -1, sec = -2;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] >= fir && a[i] >= sec)
            {
                sec = fir;
                fir = a[i];
            }
            else if(a[i] < fir && a[i] >= sec)
            {
                sec = a[i];
            }
        }
        if((fir - sec >= 2 && n > 1) || (n == 1 && a[0] > 1)) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
