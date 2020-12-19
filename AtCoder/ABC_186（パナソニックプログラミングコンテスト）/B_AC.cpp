#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int h, w, a[100][100], m = 987654321;

int main()
{
    onlycc;
    cin >> h >> w;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cin >> a[i][j];
            m = min(m, a[i][j]);
        }
    }

    int ret = 0;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            ret += (a[i][j] - m);
        }
    }

    cout << ret;

    return 0;
}
