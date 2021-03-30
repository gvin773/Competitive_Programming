#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;
typedef long double ld;

int n, x0, Y0, x2, y2;
ld theta, x1, Y1, v1, v2, dx, dy, dx0, dy0, dx1, dy1;
const double pi = 3.14159265358979f;

ld dist(ld a, ld b, ld c, ld d)
{
    ld ret = sqrt(pow(a-c, 2) + pow(b-d, 2));
    return ret;
}

int main()
{
    onlycc;
    cin >> n;
    cin >> x0 >> Y0;
    cin >> x2 >> y2;
    theta = 360/(ld)n;
    theta *= (pi/180);

    dx = (x0+x2)/(ld)2, dy = (Y0+y2)/(ld)2;
    dx0 = x0 - dx;
    dy0 = Y0 - dy;

    dx1 = dx0*cos(theta)-dy0*sin(theta);
    dy1 = dx0*sin(theta)+dy0*cos(theta);

    cout << dx1+dx << ' ' << dy1+dy;

    return 0;
}
