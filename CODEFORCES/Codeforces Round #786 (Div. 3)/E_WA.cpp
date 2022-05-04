#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, a[200000], dp[200000];

int get_adj(int x, int y)
{
    if(x == y) return (x/3)*2 + x%3;
    if(x > y) swap(x, y);
    if(x <= (y+1)/2) return (y+1)/2;

    ll gap = y-x;
    y -= gap*2;
    x -= gap;
    return gap + (x/3)*2 + x%3;
    /*ll ret = 0;
    ret += (y/2);
    y %= 2;
    x -= ret;
    if(x <= 0 && y == 0) return ret;
    if(x <= 0 && y == 1) return ret+1;
    if(x > 0 && y == 0) return ret + (x+1)/2;
    else return ret + (x+1)/2;*/
}

int get(int gap, int x, int y)
{
    if(gap == 1) return get_adj(x, y);
    if(x > y) swap(x, y); //7 5

    int ret = 987654321;
    if(gap == 2) ret = min(ret, y);
    ret = min(ret, (y+1)/2 + (x+1)/2);
    return ret;
}

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    dp[1] = get_adj(a[0], a[1]);
    ll m1 = a[0] < a[1] ? 0 : 1;
    ll m2 = a[0] < a[1] ? 1 : 0;
    for(int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-1], get_adj(a[i], a[i-1]));
        if(a[i] > a[m2]) continue;
        if(a[m1] < a[i] && a[i] <= a[m2])
        {
            dp[i] = min(dp[i], get(i-m1, a[m1], a[i]));
            m2 = i;
        }
        if(a[i] <= a[m1])
        {
            dp[i] = min(dp[i], get(i-m1, a[m1], a[i]));
            m2 = m1;
            m1 = i;
        }
    }
    cout << dp[n-1];

    return 0;
}
