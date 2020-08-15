#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int n, l[101], cnt;

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", l+i);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            for(int k = j+1; k <= n; k++)
            {
                if(!(i==j && j==k))
                {
                    int a, b;
                    int c = max({l[i], l[j], l[k]});
                    if(c == l[i])
                    {
                        a = l[j]>=l[k] ? l[k] : l[j];
                        b = l[j]>=l[k] ? l[j] : l[k];
                    }

                    else if(c == l[j])
                    {
                        a = l[i]>=l[k] ? l[k] : l[i];
                        b = l[i]>=l[k] ? l[i] : l[k];
                    }

                    else if(c == l[k])
                    {
                        a = l[i]>=l[j] ? l[j] : l[i];
                        b = l[i]>=l[j] ? l[i] : l[j];
                    }

                    if(a+b>c && !(a==b || b==c)) cnt++;
                }
            }
        }
    }

    printf("%d", cnt);

    return 0;
}
