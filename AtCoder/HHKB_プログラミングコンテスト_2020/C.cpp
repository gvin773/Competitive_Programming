#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, ans[200000], in;
set<int> s;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);

        if(in != a) ans[i] = in;
        else
        {
            in++;
            while(s.find(in) != s.end())
            {
                in++;
            }
            ans[i] = in;
        }
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << '\n';

    return 0;
}
