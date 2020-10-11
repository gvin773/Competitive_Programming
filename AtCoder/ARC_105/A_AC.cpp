#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, c, d;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d;
    if(a == b + c + d) cout << "Yes";
    else if(b == a + c + d) cout << "Yes";
    else if(c == b + a + d) cout << "Yes";
    else if(d == b + c + a) cout << "Yes";
    else if(a + b == c + d) cout << "Yes";
    else if(a + c == b + d) cout << "Yes";
    else if(a + d == b + c) cout << "Yes";
    else if(b + c == a + d) cout << "Yes";
    else if(b + d == a + c) cout << "Yes";
    else if(c + d == a + b) cout << "Yes";
    else if(a + b + c == d) cout << "Yes";
    else if(a + b + d == c) cout << "Yes";
    else if(a + c + d == b) cout << "Yes";
    else if(b + c + d == a) cout << "Yes";
    else cout << "No";

    return 0;
}
