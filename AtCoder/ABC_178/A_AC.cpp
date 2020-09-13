#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int x;

int main()
{
    onlycc;
    cin >> x;

    if(x == 0) cout << 1;
    else cout << 0;

    return 0;
}
