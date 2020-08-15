#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int n;
string str;

int main()
{
    cin >> str;

    if(str == "SSS") n = 0;
    if(str == "SSR") n = 1;
    if(str == "SRS") n = 1;
    if(str == "SRR") n = 2;
    if(str == "RSS") n = 1;
    if(str == "RSR") n = 1;
    if(str == "RRS") n = 2;
    if(str == "RRR") n = 3;

    printf("%d", n);

    return 0;
}
