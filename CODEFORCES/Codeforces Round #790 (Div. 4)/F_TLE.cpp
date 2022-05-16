#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, k, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        unordered_map<ll, ll> m;
        set<ll> s;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            s.insert(a[i]);
        }

        unordered_map<ll, ll> cnt;
        bool flag = false;
        ll before = 0, ans = -1, ansl, ansr;
        for(auto i = s.begin(); i != s.end(); i++)
        {
            //cout << "*i : " << *i <<endl;
            if(m[*i] >= k)
            {
                if(!flag || (i != s.begin() && (m.find(*i-1) == m.end() || m[*i-1] < k)))
                {
                    cnt[*i] = *i;
                    flag = true;
                    before = *i;
                }
                else
                {//cout <<"hi\n";
                    cnt[*i] = before;
                }
                if(*i - before > ans)
                {
                    ansl = before;
                    ansr = *i;
                    ans = *i - before;
                }
            }
            else
            {
                flag = false;
            }
        }
        if(ans == -1) cout << -1 << '\n';
        else cout << ansl << ' ' << ansr << '\n';
    }

    return 0;
}
