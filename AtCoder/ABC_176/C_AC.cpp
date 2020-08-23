#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int n;
int a[200000];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll ret = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            ret += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << ret;

    return 0;
}
