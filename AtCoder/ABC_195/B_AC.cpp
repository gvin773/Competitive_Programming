#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, w, m = 987654321, M = -1;

int main()
{
    onlycc;
    cin >> a >> b >> w;
    w *= 1000;

    int d = b-a;

    int i;
    for(i = 1; a*i <= w; i++);
    i--;

    int sum = a*i;
    if(i*d >= w-sum)
    {
        m = min(m, i);
        M = max(M, i);
    }

    for(i = 1; b*i < w; i++);

    sum = b*i;
    if(i*d >= sum-w)
    {
        m = min(m, i);
        M = max(M, i);
    }

    if(m != 987654321 && M != -1) cout << m << ' ' << M;
    else cout << "UNSATISFIABLE";

    return 0;
}
