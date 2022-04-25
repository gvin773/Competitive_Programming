#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll tc, n, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        ll cnt[200020] = {};
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            if(cnt[a[i]] >= 3)
            {
                cout << a[i] << '\n';
                flag = true;
                break;
            }
        }

        if(!flag) cout << -1 << '\n';
    }

    return 0;
}
