#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, a, b, c;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> a;
        cout << "Division ";
        if(a <= 1399) cout << "4\n";
        else if(a <= 1599) cout << "3\n";
        else if(a <= 1899) cout << "2\n";
        else cout << "1\n";
    }

    return 0;
}
