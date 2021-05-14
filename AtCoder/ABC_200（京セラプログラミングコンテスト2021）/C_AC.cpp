#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[200000], cnt[201], ans;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= 200;
    }
    sort(a, a+n);

    for(int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }

    for(int i = 0; i < 200; i++)
    {
        for(int j = 0; j < 200; j++)
        {
            if(cnt[i] != 0 && cnt[j] != 0 && (i-j)%200 == 0)
            {
                if(i != j) ans += (cnt[i]*cnt[j]);
                else ans += ((cnt[i]-1)*(cnt[i])/2);
            }
        }
    }

    cout << ans;

    return 0;
}
