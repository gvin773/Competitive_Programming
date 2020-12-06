#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
int p[200020];
bool s[200020];
vector<int> v;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> p[i];

    for(int i = 1; i <= n; i++)
    {
        int pos;
        for(int x = i; x <= n; x++)
        {
            if(p[x] == i)
            {
                pos = x;
                break;
            }
        }

        if(pos == i) continue;
        for(int j = pos; j > i; j--)
        {
            if(s[j-1] == true)
            {
                cout << -1;
                return 0;
            }
            s[j-1] = true;
            v.push_back(j-1);
            swap(p[j], p[j-1]);
        }
    }

    if(v.size() != n-1)
    {
        cout << -1;
        return 0;
    }

    for(auto i = v.begin(); i != v.end(); i++)
        cout << *i << '\n';

    return 0;
}
