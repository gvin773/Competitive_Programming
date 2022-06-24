#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, a;

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector<int> v;
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            m[a]++;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        if((n - v.size()) % 2) cout << v.size()-1;
        else cout << v.size();
        cout << '\n';
    }

    return 0;
}
