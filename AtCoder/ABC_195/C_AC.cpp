#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, temp, cnt, ans;

int main()
{
    onlycc;
    cin >> n;
    temp = n;

    while(temp)
    {
        cnt++;
        temp /= 10;
    }

    if(cnt == 4) ans += (n-999);
    else if(cnt == 5) ans += (9000+n-9999);
    else if(cnt == 6) ans += (99000+n-99999);

    ll sum = 999000;
    if(cnt == 7) ans += (sum+(n-999999)*2);
    else if(cnt == 8) ans += (sum+(9000000+n-9999999)*2);
    else if(cnt == 9) ans += (sum+((ll)99000000+n-(ll)99999999)*2);

    sum += 999000000*2;
    if(cnt == 10) ans += (sum+(n-(ll)999999999)*3);
    else if(cnt == 11) ans += (sum+((ll)9000000000+n-(ll)9999999999)*3);
    else if(cnt == 12) ans += (sum+((ll)99000000000+n-(ll)99999999999)*3);

    sum += 999000000000*3;
    if(cnt == 13) ans += (sum+(n-(ll)999999999999)*4);
    else if(cnt == 14) ans += (sum+((ll)9000000000000+n-(ll)9999999999999)*4);
    else if(cnt == 15) ans += (sum+((ll)99000000000000+n-(ll)99999999999999)*4);

    sum += 999000000000000*4;
    if(cnt == 16) ans += (sum+(n-(ll)999999999999999)*5);

    cout << ans;

    return 0;
}
