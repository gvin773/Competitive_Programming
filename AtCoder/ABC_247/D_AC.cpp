#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll q, n, x, c, now, num;
vector<pair<ll, ll>> v;

int main()
{
    onlycc;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> n;
        if(n == 1)
        {
            cin >> x >> c;
            v.push_back({c, x});
        }
        else
        {
            cin >> c;

            ll sum = 0;
            while(1)
            {
                if(v[now].first-num >= c)
                {
                    cout << sum+c*v[now].second << '\n';
                    num += c;
                    if(num == v[now].first)
                    {
                        now++;
                        num = 0;
                    }
                    break;
                }
                else
                {
                    sum += (v[now].first-num)*v[now].second;
                    c -= (v[now].first-num);
                    now++;
                    num = 0;
                }
            }
        }
    }

    return 0;
}
