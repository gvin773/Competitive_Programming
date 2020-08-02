#include <iostream>
#include <algorithm>
using namespace std;

char road[1000002]; //'\0', ., P, R, ... , '\0'
int temp[1000000];
int n, q;

int main()
{
    scanf("%d%d", &n, &q);
    scanf("%s", road+1);

    for(int i = 0; i < q; i++)
    {
        int start, potato = 0, time = 1, leftblock = 0, rightblock = 0;
        char dir = '+';
        scanf("%d", &start);

        for(int j = 0; j < start; j++)
        {
            if(road[j] == 'R')
                leftblock = j;
        }

        for(int j = start+1; j < n+1; j++)
        {
            if(road[j] == 'R')
                rightblock = j;
        }

        if(leftblock && rightblock) //both side closed
        {
            for(int j = leftblock+1; j < rightblock; j++)
            {
                if(road[j] == 'P')
                    potato++;
            }
            printf("%d -1\n", potato);
        }

        else
        {
            int k = 0;
            for(int j = start+1; road[j] != '\0'; dir == '+' ? j++ : j--)
            {
                if(road[j] != '.')
                {
                    dir = ((dir == '+') ? '-' : '+');

                    if(road[j] == 'P')
                    {
                        potato++;
                        road[j] = '.';
                        temp[k++] = j;
                    }
                }
                time++;
            }

            for(int j = 0; j < k; j++)
            {
                road[temp[j]] = 'P';
                temp[j] = 0;
            }

            printf("%d %d\n", potato, time);
        }
    }

    return 0;
}
