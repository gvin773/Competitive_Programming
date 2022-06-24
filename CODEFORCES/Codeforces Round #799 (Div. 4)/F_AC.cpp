#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int tc, n, x, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            m[x%10]++;
        }

        int b[10] = {};
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                for(int k = 0; k < 10; k++)
                {
                    if((i+j+k)%10 != 3) continue;
                    for(int l = 0; l < 10; l++) b[l] = 0;
                    b[i]++;
                    b[j]++;
                    b[k]++;
                    for(int l = 0; l < 10; l++)
                    {
                        if(m.find(i) == m.end()) break;
                        if(m.find(j) == m.end()) break;
                        if(m.find(k) == m.end()) break;

                        if(m[i] >= b[i] && m[j] >= b[j] && m[k] >= b[k])
                        {
                            cout << "YES\n";
                            goto xy;
                        }
                    }
                }
            }
        }
        cout << "NO\n";
        xy:;
    }

    return 0;
}
