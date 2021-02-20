#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string s;
ll n, k;

bool compare(int i, int j)
{
    return j < i;
}

int g1(ll num)
{
    vector<int> v;
    while(num)
    {
        v.push_back(num%10);
        num /= 10;
    }
    sort(v.begin(), v.end());
    ll ret = 0, ten = 1;
    for(int i : v)
    {
        ret += ten*i;
        ten *= 10;
    }

    return ret;
}

int g2(ll num)
{
    vector<int> v;
    while(num)
    {
        v.push_back(num%10);
        num /= 10;
    }
    sort(v.begin(), v.end(), compare);
    ll ret = 0, ten = 1;
    for(int i : v)
    {
        ret += ten*i;
        ten *= 10;
    }

    return ret;
}

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        n = g1(n) - g2(n);

    cout << n;

    return 0;
}
