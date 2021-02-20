#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int x;

int main()
{
    onlycc;
    cin >> x;
    cout << 100-x%100;

    return 0;
}
