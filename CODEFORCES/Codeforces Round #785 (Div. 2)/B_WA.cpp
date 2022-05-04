#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int tc;
string s;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s;
        if(s.size() == 1)
        {
            cout << "YES\n";
            continue;
        }

        map<char, int> cnt;
        for(int i = 0; i < s.size(); i++)
        {
            cnt[s[i]]++;
        }

        int lo = 0, hi = s.size()-1;
        bool flag = false;
        while(lo != hi)
        {
            //cout << "NOW lo: " << lo << ", hi: " << hi << endl;
            int M = 0, m =  987654321;
            for(auto i = cnt.begin(); i != cnt.end(); i++)
            {
                M = max(M, i->second);
                m = min(m, i->second);
            }
            if(M-m > 1)
            {
                cout << "NO\n";
                flag = true;
                break;
            }

            if(cnt[s[lo]] < cnt[s[hi]])
            {
                cnt[s[lo]]--;
                lo++;
            }
            else
            {
                cnt[s[hi]]--;
                hi--;
            }
        }
        if(flag) continue;
        cout << "YES\n";
    }

    return 0;
}
