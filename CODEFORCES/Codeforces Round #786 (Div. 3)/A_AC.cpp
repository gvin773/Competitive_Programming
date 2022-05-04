#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc, x, y;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> x >> y;
        if(y%x) cout << "0 0\n";
        else
        {
            int t = y/x, a, b;
            bool flag = false;
            for(b = 2;; b++)
            {
                for(a = 1;; a++)
                {
                    ll z = pow(b, a);
                    if(z == t)
                    {
                        flag = true;
                        break;
                    }
                    else if(z > t) break;
                }
                if(flag) break;
                if(pow(b, 1) > t) break;
            }
            if(flag) cout << a << ' ' << b << '\n';
            else if(t == 1) cout << "1 1\n";
            else cout << "0 0\n";
        }
    }

    return 0;
}
