#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int k, tnum[10], anum[10];
string s, t;
long double ans;

ll ipow(ll a, ll b)
{
    if(b == 0) return 1;

    ll Ans = pow(a, b/2);
    Ans *= Ans;
    if(b%2 == 1) Ans *= a;
    return Ans;
}

ll get_ans(int who)
{
    ll ret = 0;
    for(int i = 1; i <= 9; i++)
    {
        ll num = (who == 0 ? tnum[i] : anum[i]);
        ret += i * ipow(10, num);
    }

    return ret;
}

int main()
{
    onlycc;
    cin >> k >> s >> t;
    for(int i = 0; i < 4; i++)
    {
        tnum[s[i]-'0']++;
        anum[t[i]-'0']++;
    }

    for(int ti = 1; ti <= 9; ti++)
    {
        for(int ai = 1; ai <= 9; ai++)
        {
            tnum[ti]++;
            anum[ai]++;

            if(tnum[ti]+anum[ti] <= k && tnum[ai]+anum[ai] <= k)
            {
                if(get_ans(0) > get_ans(1))
                {
                    //cout << ti << ' ' << ai << endl;
                    if(ti == ai)
                    {
                        ll num = k-tnum[ti]-anum[ti]+2, num2 = (9*k-8);
                        ans += num*(num-1) / ((long double)num2*(num2-1));
                    }

                    else
                    {
                        ll num = k-tnum[ti]-anum[ti]+1, num2 = (9*k-8);
                        long double ret = num / (long double)num2;

                        num = k-tnum[ai]-anum[ai]+1;
                        ans += ret * num / (long double)(num2-1);
                    }
                }
            }

            tnum[ti]--;
            anum[ai]--;
        }
    }

    cout << ans;

    return 0;
}
