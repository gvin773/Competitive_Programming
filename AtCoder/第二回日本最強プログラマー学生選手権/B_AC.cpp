#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a[1000], b[1000], n, m;
vector<int> v;

int main()
{
    onlycc;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        int cnt = 0;
        for(vector<int>::iterator j = v.begin(); j != v.end(); j++)
        {
            if(*j == b[i])
            {
                j = v.erase(j);
                ++j;
                cnt = 1;
                break;
            }
        }

        if(cnt == 0) v.push_back(b[i]);
    }

    sort(v.begin(), v.end());
    for(int i : v)
    {
        cout << i << ' ';
    }

    return 0;
}
