#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b;

int main()
{
    onlycc;
    cin >> a >> b;
    cout << (a+b)/2 << ' ' << (a-b)/2;

    return 0;
}
