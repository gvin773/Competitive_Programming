#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a[100], n, cnt[1001];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 0; j < n; j++)
            if(a[j]%i == 0) cnt[i]++;
    }

    int m = 0, ans = 0;
    for(int i = 2; i <= 1000; i++)
    {
        if(cnt[i] >= m)
        {
            ans = i;
            m = cnt[i];
        }
    }

    cout << ans;

    return 0;
}
