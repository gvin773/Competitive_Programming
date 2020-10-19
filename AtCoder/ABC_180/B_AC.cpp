#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x[100000];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(x[i] >= 0) sum += x[i];
        else sum -= x[i];
    }
    cout << sum << '\n';

    double s = 0;
    for(int i = 0; i < n; i++)
    {
        s += pow(x[i], 2);
    }
    cout << fixed;
    cout.precision(16);
    cout << sqrt(s) << '\n';

    for(int i = 0; i < n; i++)
        if(x[i] < 0) x[i] = -x[i];

    int m = -99999999;
    for(int i = 0; i < n; i++)
        m = max(m, x[i]);
    cout << m;

    return 0;
}
