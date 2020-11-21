#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string s;
int n;

int main()
{
    onlycc;
    cin >> n >> s;

    if(s.size() < 3)
    {
        cout << s.size();
        return 0;
    }

    for(int i = 0; i < (int)s.size()-2;)
    {
        if(s.substr(i, 3) == "fox")
        {
            if(i == 0) s = s.substr(3);

            else
            {
                s = s.substr(0, i) + s.substr(i+3);
                i -= 2;
            }
        }
        else i++;

        if(i < 0) i = 0;
    }

    cout << s.size();

    return 0;
}
