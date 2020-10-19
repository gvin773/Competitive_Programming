#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n;
vector<ll> v;

int main()
{
    onlycc;
    cin >> n;

    for(ll i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            if(i != n/i) v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());
    for(ll i = 0; i < v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}
