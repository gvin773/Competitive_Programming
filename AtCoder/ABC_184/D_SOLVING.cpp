/*#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, c;
long double pa, pb, pc, ret;

int main()
{
    onlycc;
    cin >> a >> b >> c;

    pa = a/(long double)(a+b+c);
    pb = b/(long double)(a+b+c);
    pc = c/(long double)(a+b+c);

    for(int n = 1; n < 100; n++)
    {
        if(a == 100-n)
        {
            ret += n*pa;
        }

        if(b == 100-n)
        {
            ret += n*pb;
        }

        if(c == 100-n)
        {
            ret += n*pc;
        }
    }

    cout << fixed;
    cout.precision(10);
    cout << ret;

    return 0;
}
*/
