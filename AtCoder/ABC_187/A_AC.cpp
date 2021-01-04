#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int sa, sb;
string a, b;

int main()
{
    onlycc;
    cin >> a >> b;
    for(int i = 0; i < 3; i++)
    {
        sa += a[i] - '0';
        sb += b[i] - '0';
    }

    cout << max(sa, sb);

    return 0;
}
