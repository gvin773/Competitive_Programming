#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, v[20], cnt;

int main()
{
    onlycc;
    cin >> n;
    while(n)
    {
        v[cnt++] = n%10;
        n /= 10;
    }

    for(int i = 0; i < cnt; i++)
        v[i] %= 3;

    int sum = 0;
    for(int i = 0; i < cnt; i++)
        sum += v[i];

    if(sum%3 == 0) cout << 0;
    else if(cnt == 1) cout << -1;
    else if(sum%3 == 1)
    {
        for(int i = 0; i < cnt; i++)
        {
            if(v[i] == 1)
            {
                cout << 1;
                return 0;
            }
        }
        if(cnt == 2) cout << -1;
        else cout << 2;
    }
    else if(sum%3 == 2)
    {
        for(int i = 0; i < cnt; i++)
        {
            if(v[i] == 2)
            {
                cout << 1;
                return 0;
            }
        }

        if(cnt == 2)
        {
            cout << -1;
            return 0;
        }

        cout << 2;
    }

    return 0;
}
