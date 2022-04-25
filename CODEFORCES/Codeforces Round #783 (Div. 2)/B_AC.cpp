#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

ll t, n, m, a[100050];

int main()
{
    onlycc;
    cin >> t;
    for(int tc = 0; tc < t; tc++)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);

        ll sum = 1;
        for(int i = 1; i < n; i++)
        {
            sum += (a[i] + 1);
            //cout << sum << endl;
        }
        sum += a[n-1];

        if(sum > m) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
