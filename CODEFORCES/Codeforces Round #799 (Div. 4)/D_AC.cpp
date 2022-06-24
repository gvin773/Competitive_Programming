#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tc, x, y;
string s;

bool check(string &str)
{
    return (str[0] == str[4] && str[1] == str[3]);
}

int main()
{
    onlycc;
    cin >> tc;
    while(tc--)
    {
        cin >> s;
        cin >> x;

        string temp = s;
        ll ans = 0;

        if(check(s)) ans++;
        y = x%60;
        x /= 60;

        ll m = ((s[3]-'0')*10 + s[4]-'0' + y), h = 0;
        if(m >= 60)
        {
            h = 1;
            m %= 60;
        }
        h += ((s[0]-'0')*10 + s[1]-'0' + x);
        h %= 24;
        if(h < 10)
        {
            s[0] = '0';
            s[1] = h+'0';
        }
        else
        {
            s[0] = h/10+'0';
            s[1] = h%10+'0';
        }
        if(m < 10)
        {
            s[3] = '0';
            s[4] = m+'0';
        }
        else
        {
            s[3] = m/10+'0';
            s[4] = m%10+'0';
        }

        while(temp != s)
        {
            if(check(s)) ans++;

            m = ((s[3]-'0')*10 + s[4]-'0' + y), h = 0;
            if(m >= 60)
            {
                h = 1;
                m %= 60;
            }
            h += ((s[0]-'0')*10 + s[1]-'0' + x);
            h %= 24;
            if(h < 10)
            {
                s[0] = '0';
                s[1] = h+'0';
            }
            else
            {
                s[0] = h/10+'0';
                s[1] = h%10+'0';
            }
            if(m < 10)
            {
                s[3] = '0';
                s[4] = m+'0';
            }
            else
            {
                s[3] = m/10+'0';
                s[4] = m%10+'0';
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
