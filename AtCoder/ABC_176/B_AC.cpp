#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

string num;

int main()
{
    onlycc;
    cin >> num;

    ll sum = 0;
    for(int i = 0; i < num.size(); i++)
    {
        sum += num[i]-'0';
    }

    if(sum%9 == 0) cout << "Yes";
    else cout << "No";

    return 0;
}
