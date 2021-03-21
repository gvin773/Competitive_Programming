#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string x;
int cnt = -1;

int main()
{
    onlycc;
    cin >> x;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '.')
        {
            cnt = i;
            break;
        }
    }

    if(cnt == -1) cout << x;
    else cout << x.substr(0, cnt);

    return 0;
}
