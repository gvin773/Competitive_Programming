#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, x = 1, a;
vector<pair<int, int>> v;

void match()
{
    int k = v.size();
    int cnt = 0;
    for(int i = 0; cnt < k; cnt++)
    {
        if(i%2 == v.size()%2) i++;
        else if(i%2 != v.size()%2)
        {
            if(v[i].first < v[i-1].first) v.erase(v.begin() + i);
            else v.erase(v.begin() + i-1);
        }
    }
}

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) x *= 2;
    for(int i = 0; i < x; i++)
    {
        cin >> a;
        v.push_back(make_pair(a, i));
    }

    for(int i = 0; i < n-1; i++)
        match();

    if(v[0].first > v[1].first) cout << (v[1].second) + 1;
    else cout << (v[0].second) + 1;

    return 0;
}
