#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

char s, t;

int main()
{
    cin >> s >> t;
    if(s == 'Y')
    {
        if(t >= 'a' && t <= 'z') printf("%c", t-'a'+'A');
        else printf("%c", t);
    }

    else
    {
        printf("%c", t);
    }

    return 0;
}
