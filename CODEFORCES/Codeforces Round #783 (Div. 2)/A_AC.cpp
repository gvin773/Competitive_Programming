#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

ll t, n, m;

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> n >> m;
        if(n > m) swap(n, m);

        if(n == m) cout << (n-1)*2 << '\n';
        else if(n == 1 && m > 2) cout << -1 << '\n';
        else if(m == 2) cout << 1 << '\n';
        else if(m-n == 1) cout << (n-1)*2 + 1 << '\n';
        else
        {
            cout << (n-1)*2+(m-n-1)*2 + 1 + !((m-n)%2) << '\n';
        }
    }

    return 0;
}
