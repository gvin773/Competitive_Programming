#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll s, p;

int main()
{
    onlycc;
    cin >> s >> p;
    for(int i = 1; i <= 1000000; i++)
    {
        if(i*(s-i) == p)
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}
