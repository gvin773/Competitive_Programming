#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int h, w, cnt;
string s[100];

int main()
{
    onlycc;
    cin >> h >> w;
    for(int i = 0; i < h; i++)
        cin >> s[i];

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(s[i][j] == '.')
            {
                if(j+1 != w && s[i][j+1] == '.')
                    cnt++;

                if(i+1 != h && s[i+1][j] == '.')
                    cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
