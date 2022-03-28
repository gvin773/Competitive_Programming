#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

vector<ll> a, c, b;
ll n, m;


void division()
{
	for(int i = 0; i + a.size() <= c.size(); i++)
    {
		b.push_back(c[i] / a[0]);
		for(int j = 0; j < a.size(); j++) c[i+j] -= b[i] * a[j];
	}
}

int main()
{
    onlycc;
	cin >> n >> m;

	a.resize(n+1);
	for(int i = 0; i < n+1; i++) cin >> a[n-i];
	c.resize(n+m+1);
	for(int i = 0; i < n+m+1; i++) cin >> c[n+m-i];

	division();

	for(int i = 0; i < b.size(); i++) cout << b[b.size()-1-i] << ' ';

	return 0;
}
