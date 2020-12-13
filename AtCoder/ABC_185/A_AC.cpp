#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a1, a2, a3, a4;

int main()
{
    onlycc;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << min(min(a1, a2), min(a3, a4));

    return 0;
}
