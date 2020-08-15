#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ll x, k, d;
    scanf("%lld%lld%lld", &x, &k, &d);

    x = abs(x);
    ll temp1 = x / d;
    ll temp2 = x % d;

    if(temp2 == x)
    {
        if(k % 2 == 0)
        {
            printf("%lld", x);
        }

        else
        {
            printf("%lld", (ll)abs(x-d));
        }
    }

    else //temp2 != x
    {
        if(k >= temp1)
        {
            x -= temp1 * d;
            if(x >= 0)
            {
                if((k-temp1) % 2 == 0)
                {
                    printf("%lld", x);
                    return 0;
                }

                else
                {
                    printf("%lld", (ll)abs(x-d));
                    return 0;
                }
            }

            else
            {
                if((k-temp1) % 2 == 0)
                {
                    printf("%lld", (ll)abs(x));
                    return 0;
                }

                else
                {
                    printf("%lld", (ll)abs(x+d));
                    return 0;
                }
            }
        }

        else
        {
            printf("%lld", x-k*d);
            return 0;
        }
    }

    return 0;
}
