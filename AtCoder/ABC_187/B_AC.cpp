#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x[1000], y[1000], cnt;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            double dx = x[j] - x[i];
            double dy = y[j] - y[i];
            if(dx == 0) continue;
            if(dy/dx <= 1 && dy/dx >= -1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}
