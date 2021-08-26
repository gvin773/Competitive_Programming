#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

typedef long long ll;

int t, k, n, m, a[300], b[300];

int main()
{
    onlycc;
    cin >> t;
    for(int x = 0; x < t; x++)
    {
        cin >> k >> n >> m;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        int nowa = 0, nowb = 0;
        queue<int> q;

        while(!(nowa == n && nowb == m))
        {
            if(nowa != n && a[nowa] == 0)
            {
                k++;
                nowa++;
                q.push(0);
            }
            else if(nowb != m && b[nowb] == 0)
            {
                k++;
                nowb++;
                q.push(0);
            }
            else if(nowa != n && a[nowa] <= k) q.push(a[nowa++]);
            else if(nowb != m && b[nowb] <= k) q.push(b[nowb++]);
            else break;
        }

        if(q.size() != n+m) cout << -1 << '\n';
        else
        {
            while(!q.empty())
            {
                cout << q.front() << ' ';
                q.pop();
            }
            cout << '\n';
        }
    }

    return 0;
}
