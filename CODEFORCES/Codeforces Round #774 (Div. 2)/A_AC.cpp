#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, s;

int main()
{
    onlycc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        cin >> n >> s;
        ll lo = 0, hi = n+1;
        while(lo+1 < hi)
        {
            ll mid = (lo+hi) / 2;
            ll sum = n*n*mid + (n-1)*(n+1-mid);

            if(sum >= s) hi = mid;
            else lo = mid;
        }
        if((n-1)*(n+1) >= s) cout << 0 << '\n';
        else cout << lo+1 << '\n';
        /*for(int j = 0; j <= n+1; j++)
        {
            if(n*n*j + (n-1)*(n+1-j) >= s)
            {
                if(j == 0) cout << 0 << '\n';
                else cout << j << '\n';
                break;
            }
        }*/
    }

    return 0;
}
