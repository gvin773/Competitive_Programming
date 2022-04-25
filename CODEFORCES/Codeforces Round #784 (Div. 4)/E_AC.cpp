#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n;
string s[100000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        ll ans = 0;
        map<string, ll> m1, m2;
        map<char, ll> M1, M2;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            if(m1.find(s[i]) == m1.end()) m1[s[i]] = 1;
            else m1[s[i]]++;

            if(M1.find(s[i][0]) == M1.end()) M1[s[i][0]] = 1;
            else M1[s[i][0]]++;
        }

        for(auto iter = m1.begin(); iter != m1.end(); iter++)
        {
            if(iter->first.size() == 2)
            {
                ans += (iter->second * (M1[iter->first[0]] - iter->second));
            }
        }

        for(int i = 0; i < n; i++) reverse(s[i].begin(), s[i].end());

        for(int i = 0; i < n; i++)
        {
            if(m2.find(s[i]) == m2.end()) m2[s[i]] = 1;
            else m2[s[i]]++;

            if(M2.find(s[i][0]) == M2.end()) M2[s[i][0]] = 1;
            else M2[s[i][0]]++;
        }

        for(auto iter = m2.begin(); iter != m2.end(); iter++)
        {
            if(iter->first.size() == 2)
            {
                ans += (iter->second * (M2[iter->first[0]] - iter->second));
            }
        }

        /*for(int i = 0; i < 20; i++)
        {
            ans += m1[i]*(m1[i]-1)/2;
            ans += m2[i]*(m2[i]-1)/2;
        }*/
        cout << ans/2 << '\n';
    }

    return 0;
}
