#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, a[200001];
string s;

int main()
{
    onlycc;
    cin >> t;
    for(ll tc = 0; tc < t; tc++)
    {
        cin >> n;
        int p = 0, m = 0, zero = -1;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] == 0 && zero == -1)
            {
                zero = i;
            }
        }

        if(zero == -1 && (m&1 == 0))
        {
            cout << "0 0\n";
        }
        else if(zero == -1)
        {
            ll lm = 0, rm = 0, lans = 0, rans = 0;
            for(int i = 1; i <= n; i++)
            {
                if(a[i] == 2) lm++;
                else if(a[i] < 0)
                {
                    if(a[i] == -2) lm++;
                    lans = i;
                    break;
                }
            }

            for(int i = n; i >= 1; i--)
            {
                if(a[i] == 2) rm++;
                else if(a[i] < 0)
                {
                    if(a[i] == -2) rm++;
                    rans = n-i+1;
                    break;
                }
            }

            if(lm > rm) cout << 0 << ' ' << rans << '\n';
            else cout << lans << ' ' << 0 << '\n';
        }
        else
        {
            int section[200002] = {}, sminus[200002] = {}, two[200002] = {};
            int scnt = 0, Max = -1,idx = -1;
            for(int i = 1; i <= n; i++)
            {
                if(a[i] == 0)
                {
                    scnt++;
                }
                else if(a[i] < 0)
                {
                    sminus[scnt]++;
                    //cout << "hi";
                    if(a[i] == -2) two[scnt]++;
                }
                else if(a[i] == 2) two[scnt]++;
            }

            for(int i = 0; i <= scnt; i++)
            {
                if(!(sminus[i] & 1))
                {
                    if(Max < two[i])
                    {
                        Max = two[i];
                        idx = i;
                    }
                }
            }

            if(idx == -1) cout << n << ' ' << 0 << '\n';
            else
            {
                int checker = 0;
                bool visited = false, visitedf = false;
                for(int i = 1; i <= n; i++)
                {
                    if(a[i] == 0) checker++;
                    if(checker == idx && !visited)
                    {
                        visited = true;
                        if(i != 1) cout << i << ' ';
                        else cout << 0 << ' ';
                    }
                    if(checker == idx+1)
                    {
                        visitedf = true;
                        cout << n-i+1 << '\n';
                    }
                }
                if(!visitedf) cout << 0 << '\n';
            }
        }
    }

    return 0;
}
