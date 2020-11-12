#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, a[200000], sump[200005], summ[200005];

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll cur = a[0], m = 0, pcnt = 0, mcnt = 0;
    bool before;
    if(a[0] > 0)
    {
        sump[pcnt++] = a[0];
        m = a[0];
        before = true;
    }
    else if(a[0] == 0) ;
    else
    {
        summ[mcnt++] = a[0];
        before = false;
    }

    for(int i = 1; i < n; i++)
    {
        if(before == true && a[i] > 0)
        {
            sump[pcnt-1] += a[i];
        }
        else if(before == false && a[i] > 0)
        {
            sump[pcnt++] += a[i];
        }

        else if(before == false && a[i] < 0)
        {
            summ[mcnt-1] += a[i];
        }
        else if(before == true && a[i] < 0)
        {
            summ[mcnt++] += a[i];
        }

        cur += a[i];

    }



    ll cur = a[0], m = a[0] > 0 ? a[0] : 0, psum = a[0] > 0 ? a[0] : 0, pcnt = 0;
    sum[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        cur += psum;
        m = max(m, cur);
        sum[i] = sum[i-1] + a[i];
        if(sum[i] > 0)
        {
            psum = sum[i];
            pcnt = i;
        }
        cur += (sum[i]-sum[pcnt]);
    }



    cout << m;

    return 0;
}
