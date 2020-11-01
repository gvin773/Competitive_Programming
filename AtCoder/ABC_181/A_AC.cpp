#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a;

int main()
{
    onlycc;
    cin >> a;
    if(a%2 == 0) cout << "White";
    else cout << "Black";

    return 0;
}
