#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b;

int main()
{
    onlycc;
    cin >> a >> b;
    for(int i = b; i > 1; i--)
    {
        int n = i, cnt = 0;
        for(int s = 1; n <= b; s++)
        {
            n = s*i;
            if(n <= b && a <= n)
            {
                cnt++;
                if(cnt == 2)
                {
                    cout << i;
                    return 0;
                }
            }
        }
    }

    cout << 1;

    return 0;
}
