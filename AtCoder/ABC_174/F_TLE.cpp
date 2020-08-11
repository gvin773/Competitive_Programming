#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int n, q, c[500001];
set<int> kind[500001];

int main()
{
    scanf("%d%d", &n, &q);

    for(int i = 1; i <= n; i++)
        scanf("%d", c+i);

    for(int i = 0; i < q; i++)
    {
        int start, last;
        scanf("%d%d", &start, &last);

        int temp[500001];

        for(int j = start; j <= last; j++)
            temp[j] = c[j];

        sort(temp+start, temp+last+1);

        int ret = last - start + 1;
        for(int j = start; j < last; j++)
            if(temp[j] == temp[j+1]) ret--;

        printf("%d\n", ret);
    }

    return 0;
}
