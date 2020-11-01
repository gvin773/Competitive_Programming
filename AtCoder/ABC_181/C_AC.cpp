#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, x[101], y[101], cnt;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                int xd1 = x[i]-x[j];
                int xd2 = x[j]-x[k];

                if(x[i]-x[j] == 0 && x[j]-x[k] == 0)
                {
                        cout << "Yes";
                        return 0;
                }

                else if(x[i]-x[j] == 0 || x[j]-x[k] == 0)
                {
                    continue;
                }

                else if((y[i]-y[j])/double(x[i]-x[j]) == (y[j]-y[k])/double(x[j]-x[k]))
                {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }

    cout << "No";

    return 0;
}
