#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string c;

int main()
{
    onlycc;
    cin >> c;
    if(c[0] == c[1] && c[1] == c[2]) cout << "Won";
    else cout << "Lost";

    return 0;
}
