#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int n, x, t;

int main()
{
    onlycc;
    cin >> n >> x >> t;

    int sum = 0, ret = 0;
    while(sum < n)
    {
        sum += x;
        ret += t;
    }

    cout << ret;

    return 0;
}
