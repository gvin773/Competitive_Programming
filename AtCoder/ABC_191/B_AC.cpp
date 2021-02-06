#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x;
vector<int> a;

int main()
{
    onlycc;
    cin >> n >> x;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(auto i = a.begin(); i != a.end();)
    {
        if(*i == x)
        {
            i = a.erase(i);
        }
        else i++;
    }
    for(auto i = a.begin(); i != a.end(); i++) cout << *i << ' ';

    return 0;
}
