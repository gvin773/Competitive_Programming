#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int a, b, c;

int main()
{
    onlycc;
    cin >> a >> b >> c;
    if(c == 0)
    {
        while(1)
        {
            a--;
            if(a <= 0)
            {
                cout << "Aoki";
                break;
            }

            b--;
            if(b <= 0)
            {
                cout << "Takahashi";
                break;
            }
        }
    }

    else
    {
        while(1)
        {
            b--;
            if(b <= 0)
            {
                cout << "Takahashi";
                break;
            }

            a--;
            if(a <= 0)
            {
                cout << "Aoki";
                break;
            }
        }
    }


    return 0;
}
