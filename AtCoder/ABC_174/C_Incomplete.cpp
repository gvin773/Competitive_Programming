#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int counter, k;

int main()
{
    scanf("%d", &k);

    if(k%2 == 0 || k%5 == 0)
    {
        printf("-1");
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &x, &y);
        if(sqrt(x*x+y*y) <= d)
            counter++;
    }

    printf("%d", counter);

    return 0;
}
