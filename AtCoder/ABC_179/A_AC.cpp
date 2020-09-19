#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

string s;

int main()
{
    onlycc;
    cin >> s;

    if(s[s.size()-1] == 'e') cout << s << 's';
    else if(s[s.size()-1] == 's') cout << s << "es";
    else cout << s << 's';

    return 0;
}
