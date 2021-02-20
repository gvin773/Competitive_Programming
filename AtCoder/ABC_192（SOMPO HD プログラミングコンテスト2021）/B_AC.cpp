#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string s;

int main()
{
    onlycc;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
        {
            if(!(s[i] >= 'a' && s[i] <= 'z'))
            {
                cout << "No";
                return 0;
            }
        }

        else
        {
            if(!(s[i] >= 'A' && s[i] <= 'Z'))
            {
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";

    return 0;
}
