#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, m, a, b, color[25], cnt;
bool W[25][25];

bool check(int i)
{
    bool s = 1;
    for(int j = 1; j <= n && s; j++)
    {
        if(i != j && W[i][j] && color[i] == color[j]) s = false;
    }
    return s;
}

void coloring(int i)
{
    if(i == 0)
    {
        cnt++;
        return;
    }

    for(int j = 1; j <= 3; j++)
    {
        color[i] = j;
        if(check(i))
        {
            coloring(i-1);
        }
    }
    color[i] = 0;
}

int main()
{
    onlycc;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        W[a][b] = 1;
        W[b][a] = 1;
    }

    if(m != 0)
    {
        coloring(n);
        cout << cnt;
    }
    else cout << (ll)pow(3,  n);

    return 0;
}
