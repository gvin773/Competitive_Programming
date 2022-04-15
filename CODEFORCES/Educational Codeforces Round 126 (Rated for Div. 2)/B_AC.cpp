#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int t, n, a, nodes[32768];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        for(int i = 0; i < 32768; i++) nodes[i] = 987654321;

        bool visited[32768] = {};
        queue<int> q;
        q.push(a);
        visited[a] = true;

        int level = 0;
        while(!q.empty())
        {
            bool flag = 0;
            int Size = q.size();
            for(int i = 0; i < Size; i++)
            {
                int now = q.front();
                q.pop();

                if(now == 0)
                {
                    flag = true;
                    cout << level << ' ';
                    break;
                }

                if(!visited[(now+1)&32767])
                {
                    visited[(now+1)&32767] = true;
                    q.push((now+1)&32767);
                }
                if(!visited[(now*2)&32767])
                {
                    visited[(now*2)&32767] = true;
                    q.push((now*2)&32767);
                }
            }
            level++;
            if(flag) break;
        }
    }

    return 0;
}
