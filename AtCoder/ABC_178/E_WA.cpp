#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

ll n, M = -9876543210, m = 98876543210;
ll Ma = -9876543210, mi = 9876543210;
vector<pair<int ,int>> v[2];
vector<pair<int, int>> b[2];
pair<int, int> n1[200000];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if(x+y > M)
        {
            while(v[0].size()) v[0].erase(v[0].begin());
            v[0].push_back(make_pair(x, y));
            M = x+y;
        }

        else if(x+y == M)
        {
            v[0].push_back(make_pair(x, y));
        }

        else if(x+y < m)
        {
            while(v[1].size()) v[1].erase(v[1].begin());
            v[1].push_back(make_pair(x, y));
            m = x+y;
        }

        else if(x+y == m)
        {
            v[1].push_back(make_pair(x, y));
        }

        if(x-y > Ma)
        {
            while(b[0].size()) b[0].erase(b[0].begin());
            b[0].push_back(make_pair(x, y));
            Ma = x-y;
        }

        else if(x-y == Ma)
        {
            b[0].push_back(make_pair(x, y));
        }

        else if(x-y < mi)
        {
            while(b[1].size()) b[1].erase(b[1].begin());
            b[1].push_back(make_pair(x, y));
            mi = x-y;
        }

        else if(x-y == mi)
        {
            b[1].push_back(make_pair(x, y));
        }
    }

    int ret = 0;
    int cnt = 0;
    for(auto i = v[0].begin(); i != v[0].end(); i++)
    {
        n1[cnt++] = *i;
    }

    for(auto i = v[1].begin(); i != v[1].end(); i++)
    {
        n1[cnt++] = *i;
    }

    for(int i = 0; i < cnt-1; i++)
        ret = max(ret, abs(n1[i].first-n1[i+1].first)+(n1[i].second-n1[i+1].second));

    cnt = 0;
    for(auto i = b[0].begin(); i != b[0].end(); i++)
    {
        n1[cnt++] = *i;
    }

    for(auto i = b[1].begin(); i != b[1].end(); i++)
    {
        n1[cnt++] = *i;
    }

    for(int i = 0; i < cnt-1; i++)
        ret = max(ret, abs(n1[i].first-n1[i+1].first)+(n1[i].second-n1[i+1].second));

    cout << ret;

    return 0;
}
