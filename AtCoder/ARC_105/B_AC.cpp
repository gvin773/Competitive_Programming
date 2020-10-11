#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, a;
set<int> s;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }

    int temp = 0;
    while(s.size() != 1)
    {
        temp = *s.rbegin()-*s.begin();
        s.erase(*s.rbegin());
        s.insert(temp);
    }

    cout << *s.begin();

    return 0;
}
