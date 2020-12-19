#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, ret;
bool check[100010];

void octal(int num, string &oc)
{
    if(num > 0)
    {
        octal(num / 8, oc);
        oc += to_string(num%8);
    }
}

int main()
{
    onlycc;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        while(temp)
        {
            if(temp % 10 == 7)
            {
                check[i] = true;
                break;
            }
            temp /= 10;
        }

        string oc = "";
        octal(i, oc);
        for(int j = 0 ; j < (int)oc.size(); j++)
        {
            if(oc[j] == '7')
            {
                check[i] = true;
                break;
            }
        }
        //if(check[1] == true) cout << i << endl;
    }

    for(int i = 1; i <= n; i++)
    {
        if(!check[i]) ret++;
        //else cout << "hi" << i;
    }

    cout << ret;

    return 0;
}
