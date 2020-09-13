#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

ll a, b, c, d;

int main()
{
    onlycc;
    cin >> a >> b >> c >> d;

    ll m = a*c;
    m = max(m, a*d);
    m = max(m, b*c);
    m = max(m, b*d);

    cout << m;

    return 0;
}
