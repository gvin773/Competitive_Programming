#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, q, t, a, b, cnt;
string s;

int main()
{
    onlycc;
    cin >> n;
    cin >> s;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> t >> a >> b;
        if(t == 1)
        {
            if(cnt == 0)
            {
                swap(s[a-1], s[b-1]);
            }
            else
            {
                if(a <= n) a += n;
                else a -= n;
                if(b <= n) b += n;
                else b -= n;
                swap(s[a-1], s[b-1]);
            }
        }
        else
        {
            cnt = (cnt == 1 ? 0 : 1);
        }
    }

    if(cnt == 0) cout << s;
    else cout << s.substr(n, n) + s.substr(0, n);

    return 0;
}
