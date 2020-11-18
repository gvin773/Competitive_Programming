#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

ll n, k, t[10][10], ans;

int main()
{
    onlycc;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }

    if(n == 2)
    {
    for(int a = 1; a < n; a++)
    {
        if(t[0][a]+t[a][0] == k) ans++;
    }
    }

    if(n == 3)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            if(a!=b)
            {
                if(t[0][a]+t[a][b]+t[b][0] == k) ans++;
            }
        }
    }
    }

    if(n == 4)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            for(int c = 1; c < n; c++)
            {
                if(a!=b && a!=c && b!=c)
                {
                    if(t[0][a]+t[a][b]+t[b][c]+t[c][0] == k) ans++;
                }
            }
        }
    }
    }

    if(n == 5)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            for(int c = 1; c < n; c++)
            {
                for(int d = 1; d < n; d++)
                {
                    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                    {
                        if(t[0][a]+t[a][b]+t[b][c]+t[c][d]+t[d][0] == k) ans++;
                    }
                }
            }
        }
    }
    }

    if(n == 6)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            for(int c = 1; c < n; c++)
            {
                for(int d = 1; d < n; d++)
                {
                    for(int e = 1; e < n; e++)
                    {
                        if(a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
                        {
                            if(t[0][a]+t[a][b]+t[b][c]+t[c][d]+t[d][e]+t[e][0] == k) ans++;
                        }
                    }
                }
            }
        }
    }
    }

    if(n == 7)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            for(int c = 1; c < n; c++)
            {
                for(int d = 1; d < n; d++)
                {
                    for(int e = 1; e < n; e++)
                    {
                        for(int f = 1; f < n; f++)
                        {
                            if(a!=b && a!=c && a!=d && a!=e && a!=f && b!=c && b!=d && b!=e && b!=f && c!=d && c!=e && c!=f && d!=e && d!=f && e!=f)
                            {
                                if(t[0][a]+t[a][b]+t[b][c]+t[c][d]+t[d][e]+t[e][f]+t[f][0] == k) ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    }

    if(n == 8)
    {
    for(int a = 1; a < n; a++)
    {
        for(int b = 1; b < n; b++)
        {
            for(int c = 1; c < n; c++)
            {
                for(int d = 1; d < n; d++)
                {
                    for(int e = 1; e < n; e++)
                    {
                        for(int f = 1; f < n; f++)
                        {
                            for(int g = 1; g < n; g++)
                            {
                                if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && b!=c && b!=d && b!=e && b!=f && b!=g && c!=d && c!=e && c!=f && c!=g && d!=e && d!=f && d!=g && e!=f && e!=g && f!=g)
                                {
                                    if(t[0][a]+t[a][b]+t[b][c]+t[c][d]+t[d][e]+t[e][f]+t[f][g]+t[g][0] == k) ans++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    }

    cout << ans;

    return 0;
}
