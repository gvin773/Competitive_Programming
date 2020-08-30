#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

double d, t, s;

int main()
{
    onlycc;
    cin >> d >> t >> s;

    if(d/s <= t) cout << "Yes";
    else cout << "No";

    return 0;
}
