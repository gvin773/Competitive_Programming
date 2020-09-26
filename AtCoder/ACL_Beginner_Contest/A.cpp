#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int k;
string str = "ACL";

int main()
{
    onlycc;
    cin >> k;
    for(int i = 0; i < k; i++)
        cout << str;

    return 0;
}
