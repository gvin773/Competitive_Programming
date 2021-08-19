#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int t;
string s;

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> s;
        auto S = s.begin(), E = s.begin();
        int state[4] = {}, ans = 987654321;
        bool cnt = false;

        while(E != s.end())
        {
            if(!cnt) state[*E-'0']++;
            cnt = false;
            if(state[1] && state[2] && state[3])
            {
                ans = min(ans, (int)(E-S+1));
                state[*S-'0']--;
                S++;
                cnt = true;
            }
            else
            {
                E++;
            }
        }

        cout << ((ans == 987654321) ? 0 : ans)  << '\n';
    }

    return 0;
}
