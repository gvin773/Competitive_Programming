#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, ret;
string s;

int main()
{
    onlycc;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        int a = 0, t = 0, g = 0, c = 0;
        for(int j = i; j < n; j++)
        {
            switch(s[j])
            {
                case 'A': a++; break;
                case 'T': t++; break;
                case 'G': g++; break;
                case 'C': c++; break;
            }

            if(a == t && g == c) ret++;
        }

    }

    cout << ret;

    return 0;
}
