#include <iostream>
#include <algorithm>
using namespace std;

int h[100001], temp[100001], num1, num2, num3;
int n, count1, sum;
int sort1[100000], sort2[100000];

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", h+i);
        temp[i] = h[i] % 3;
        sum += temp[i];
    }

    if(sum % 3 != 0)
    {
        printf("NO");
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        if(temp[i] == 1) num1++;
        else if(temp[i] == 2) num2++;
    }

    num3 = n - num1 - num2;

    if(num1 == num2)
    {
        printf("YES");
        return 0;
    }

    if(num1 > num2)
    {
        if(num3%2==0 && (num1-num2)%3==0)
        {
            printf("YES");
            return 0;
        }

        if((num1-num2) % 3 != 0)
        {
            printf("NO");
            return 0;
        }
        int j1 = 0, j2 = 0;
        for(int i = 1; i <= n; i++)
        {
            if(temp[i] == 1)
            {
                sort1[j1++] = h[i];
            }

            else if(temp[i] == 2)
            {
                sort2[j2++] = h[i];
            }
        }

        sort(sort1, sort1+num1);

        for(int i = num2; i < num1; i++)
        {
            if(sort1[i] == 1)
            {
                count1++;
            }
        }

        if(count1 <= (num1-num2)*2/3)
        {
            printf("YES");
            return 0;
        }

        else
        {
            printf("NO");
            return 0;
        }
    }

    else
    {
        if((num2-num1) % 3 != 0) printf("NO");
        else printf("YES");
        return 0;
    }

    return 0;
}
