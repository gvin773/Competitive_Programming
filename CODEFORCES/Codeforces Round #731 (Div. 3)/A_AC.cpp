#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <queue>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int t, sx, sy, ex, ey, fx, fy;

bool check(int n)
{
    if(n)
    {
        if(sx < ex)
        {
            if(sx < fx && fx < ex) return true;
            else return false;
        }
        else
        {
            if(ex < fx && fx < sx) return true;
            else return false;
        }
    }
    else
    {
        if(sy < ey)
        {
            if(sy < fy && fy < ey) return true;
            else return false;
        }
        else
        {
            if(ey < fy && fy < sy) return true;
            else return false;
        }
    }
}

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> sx >> sy;
        cin >> ex >> ey;
        cin >> fx >> fy;

        int dis = abs(sx-ex) + abs(sy-ey);
        if((sx == ex && ex == fx && check(0)) || (sy == ey && ey == fy && check(1))) cout << dis+2 << '\n';
        else cout << dis << '\n';
    }

    return 0;
}
