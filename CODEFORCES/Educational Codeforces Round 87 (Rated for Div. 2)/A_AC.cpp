#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

ll t, a, b, c, d;

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        ll rest = b, time = b;
        if(rest >= a) cout << time << '\n';
        else
        {
            if(c <= d) cout << -1 << '\n';
            else
            {
                ll k = (a-b)/(c-d);
                if(k*(c-d) >= (a-b))
                {
                    cout << b + c*k << '\n';
                }
                else cout << b + c*(k+1) << '\n';
            }
        }
    }

    return 0;
}
