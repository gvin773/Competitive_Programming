#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

string s, t;
int ret = 987654321;

int main()
{
    onlycc;
    cin >> s >> t;
    for(int i = 0; i <= s.size()-t.size(); i++)
    {
        int cnt = 0;
        for(int j = i; j < t.size()+i; j++)
        {
            if(s[j] != t[j-i]) cnt++;
        }

        ret = min(ret, cnt);
    }

    cout << ret;

    return 0;
}
