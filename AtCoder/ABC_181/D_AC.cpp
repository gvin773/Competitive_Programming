#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

string s;
int num[10];

int main()
{
    onlycc;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++)
    {
        num[s[i]-'0']++;
    }

    if(s.size() == 1)
    {
        if(s[0] == '8') cout << "Yes";
        else cout << "No";
        return 0;
    }

    if(s.size() == 2)
    {
        if(num[1] >= 1 && num[6] >= 1) cout << "Yes";
        else if(num[2] >= 1 && num[4] >= 1) cout << "Yes";
        else if(num[3] >= 1 && num[2] >= 1) cout << "Yes";
        else if(num[4] >= 1 && num[8] >= 1) cout << "Yes";
        else if(num[5] >= 1 && num[6] >= 1) cout << "Yes";
        else if(num[6] >= 1 && num[4] >= 1) cout << "Yes";
        else if(num[7] >= 1 && num[2] >= 1) cout << "Yes";
        else if(num[8] >= 2) cout << "Yes";
        else if(num[9] >= 1 && num[6] >= 1) cout << "Yes";
        else cout << "No";
        return 0;
    }

    if(num[1] >= 2 && num[2] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[2] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[3] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[4] >= 2) cout << "Yes";
    else if(num[1] >= 1 && num[5] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[6] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[7] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[8] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[1] >= 1 && num[9] >= 1 && num[2] >= 1) cout << "Yes";

    else if(num[2] >= 1 && num[1] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[2] >= 2 && num[4] >= 1) cout << "Yes";
    else if(num[2] >= 2 && num[3] >= 1) cout << "Yes";
    else if(num[2] >= 1 && num[4] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[2] >= 1 && num[5] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[2] >= 1 && num[6] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[2] >= 2 && num[7] >= 1) cout << "Yes";
    else if(num[2] >= 1 && num[8] >= 2) cout << "Yes";
    else if(num[2] >= 1 && num[9] >= 1 && num[6] >= 1) cout << "Yes";

    else if(num[3] >= 1 && num[1] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[2] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[3] >= 2 && num[6] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[4] >= 2) cout << "Yes";
    else if(num[3] >= 1 && num[5] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[6] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[7] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[8] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[3] >= 1 && num[9] >= 1 && num[2] >= 1) cout << "Yes";

    else if(num[4] >= 1 && num[1] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[4] >= 2 && num[2] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[3] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[4] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[5] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[6] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[7] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[4] >= 1 && num[8] >= 2) cout << "Yes";
    else if(num[4] >= 1 && num[9] >= 1 && num[6] >= 1) cout << "Yes";

    else if(num[5] >= 1 && num[1] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[2] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[3] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[4] >= 2) cout << "Yes";
    else if(num[5] >= 2 && num[2] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[6] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[7] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[8] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[5] >= 1 && num[9] >= 1 && num[2] >= 1) cout << "Yes";

    else if(num[6] >= 1 && num[1] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[2] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[3] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[4] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[5] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[6] >= 2 && num[4] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[7] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[6] >= 1 && num[8] >= 2) cout << "Yes";
    else if(num[6] >= 2 && num[9] >= 1) cout << "Yes";

    else if(num[7] >= 1 && num[1] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[2] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[3] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[4] >= 2) cout << "Yes";
    else if(num[7] >= 1 && num[5] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[6] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[7] >= 2 && num[6] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[8] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[7] >= 1 && num[9] >= 1 && num[2] >= 1) cout << "Yes";

    else if(num[8] >= 1 && num[1] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[8] >= 1 && num[2] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[8] >= 1 && num[3] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[8] >= 2 && num[4] >= 1) cout << "Yes";
    else if(num[8] >= 1 && num[5] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[8] >= 1 && num[6] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[8] >= 1 && num[7] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[8] >= 3) cout << "Yes";
    else if(num[8] >= 1 && num[9] >= 1 && num[6] >= 1) cout << "Yes";

    else if(num[9] >= 1 && num[1] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[2] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[3] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[4] >= 2) cout << "Yes";
    else if(num[9] >= 1 && num[5] >= 1 && num[2] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[6] >= 1 && num[8] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[7] >= 1 && num[6] >= 1) cout << "Yes";
    else if(num[9] >= 1 && num[8] >= 1 && num[4] >= 1) cout << "Yes";
    else if(num[9] >= 2 && num[2] >= 1) cout << "Yes";

    else cout << "No";

    return 0;
}
