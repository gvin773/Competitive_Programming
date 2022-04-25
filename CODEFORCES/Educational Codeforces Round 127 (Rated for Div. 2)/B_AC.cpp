#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, n, a[200000];

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        //ll s[200020] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            //if(i != 0) s[i] = a[i] - a[i-1];
        }
        if(a[n-1]-1 - (a[0]+1)-1 <= n-2) cout << "YES\n";
        else cout << "NO\n";
        /*bool flag = false, check = false, n2 = false, o = false;
        ll cnt = 0, num2 = 0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == 2)
            {
                n2 = true;
                cnt++;
                num2++;
                if(cnt > 2 || check || o)
                {
                    cout << "NO\n";
                    flag = true;
                    break;
                }
                if(cnt == 2) o = true;
            }
            if(s[i] != 2 && cnt > 0) cnt = 0;
            if(s[i] == 3)
            {
                if(check)
                {
                    cout << "NO\n";
                    flag = true;
                    break;
                }
                check = true;
            }
            if(s[i] > 3)
            {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        if(flag) continue;
        if(!flag && n2) cout << "NO\n";
        else cout << "YES\n";*/
    }

    return 0;
}
