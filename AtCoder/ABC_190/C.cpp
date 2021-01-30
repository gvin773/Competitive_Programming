#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, m, a[101], b[101], k, c[101], d[101], ans;
int checked[101];

int check(int now)
{
    if(now == k+1)
    {
        int temp = 0;
        for(int i = 1; i <= m; i++)
            if(checked[a[i]] && checked[b[i]]) temp++;
        ans = max(ans, temp);
        return temp;
    }

    checked[c[now]]++;
    int x = check(now+1);

    checked[c[now]]--;
    checked[d[now]]++;
    int y = check(now+1);
    checked[d[now]]--;

    return max(x, y);
}

int main()
{
    onlycc;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
        cin >> a[i] >> b[i];
    cin >> k;
    for(int i = 1; i <= k; i++)
        cin >> c[i] >> d[i];

    //check(1);
    cout << check(1);

    return 0;
}
