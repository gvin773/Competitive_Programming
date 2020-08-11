#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int counter;

int main()
{
    double n, d, x, y;
    scanf("%lf%lf", &n, &d);

    for(int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &x, &y);
        if(sqrt(x*x+y*y) <= d)
            counter++;
    }

    printf("%d", counter);


    return 0;
}
