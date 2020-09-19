#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

typedef long long ll;

int n, cnt[1000000];
ll ret;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 1; i < n; i++)
        for(int j = i; j < n; j += i)
            cnt[j]++;

    for(int i = 1; i < n; i++)
        ret += cnt[i];

    cout << ret;

    return 0;
}
