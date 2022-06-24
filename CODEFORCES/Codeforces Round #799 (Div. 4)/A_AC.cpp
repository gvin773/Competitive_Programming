#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, a, b;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> a;

        ll cnt = 0;
        for(int i = 0; i < 3; i++)
        {
            cin >> b;
            if(a < b) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
