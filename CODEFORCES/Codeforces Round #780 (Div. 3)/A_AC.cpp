#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, a, b;

int main()
{
    onlycc;
    cin >> t;
    for(ll tc = 0; tc < t; tc++)
    {
        cin >> a >> b;
        if(a == 0) cout << 1;
        else if(a < b) cout << 2*b+a+1;
        else if(a == b) cout << b*2+a+1;
        else cout << b*2+a+1;
        cout << '\n';
    }

    return 0;
}
