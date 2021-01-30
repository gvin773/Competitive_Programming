#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x[100], y[100], s, d;

int main()
{
    onlycc;
    cin >> n >> s >> d;
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for(int i = 0; i < n; i++)
    {
        if(x[i] < s && y[i] > d)
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}
