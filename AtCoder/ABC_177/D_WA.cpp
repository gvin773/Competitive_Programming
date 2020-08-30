#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

typedef long long ll;

set<int> people[200000];
int n, m, cnt, ret;

int main()
{
    onlycc;
    cin >> n >> m;
    if(m == 0)
    {
        cout << n;
        return 0;
    }

    for(int i = 0; i < m; i++)
    {
        int a, b, j, cnt1 = 0, cnt2 = 0;
        cin >> a >> b;
        for(j = 0; j <= cnt; j++)
        {
            if(people[j].find(a) != people[j].end())
            {
                cnt1 = 1;
                break;
            }

            if(people[j].find(b) != people[j].end())
            {
                cnt2 = 1;
                break;
            }
        }

        if(cnt1 == 1)
        {
            people[j].insert(b);
        }

        else if(cnt2 == 1)
        {
            people[j].insert(a);
        }

        else
        {
            cnt++;
            people[cnt].insert(a);
            people[cnt].insert(b);
        }
    }

    int sum = 0;
    for(int i = 0; i <= cnt; i++)
    {
        sum += (int)people[i].size();
        ret = max(ret, (int)people[i].size());
    }

    ret = max(ret, n-sum);

    cout << ret;

    return 0;
}
