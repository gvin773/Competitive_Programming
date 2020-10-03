#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, a[100], b[100], c = -1, ta[100], tb[100];
bool on[201], off[201];

void dfs(int current)
{
    if(current == n) return;

    if(a[current] == -1 && b[current] == -1)
    {
        for(int i = 1; i <= 2*n; i++)
        {
            if(on[i] == false)
            {
                on[i] = true;
                a[current] = i;
            }
            dfs(current);
        }
    }

    else if(a[current] == -1 && b[current] != -1)
    {

    }

    else if(a[current] != -1 && b[current] == -1)
    {

    }

    else if(a[current] != -1 && b[current] != -1)
    {

    }
}

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= b[i])
        {
            cout << "No";
            return 0;
        }

        if(a[i] != -1 && on[a[i]] == true)
        {
            cout << "No";
            return 0;
        }

        if(b[i] != -1 && off[b[i]] == true)
        {
            cout << "No";
            return 0;
        }

        if(a[i] != -1) on[a[i]] = true;
        if(b[i] != -1) off[b[i]] = true;

        if(a[i] != -1 && b[i] != -1)
        {
            if(c == -1) c = b[i]-a[i]-1;
            else
            {
                cout << "No";
                return 0;
            }
        }
    }

    for(int ret = 0; ret <= 2*n-2; ret++)
    {
        for(int i = 0; i < n; i++)
            ta[i] = a[i], tb[i] = b[i];

        for(int i = 0; i < n; i++)
        {
            if(a[i] == -1 && b[i] == -1)
            {

            }

            else if(a[i] == -1 && b[i] != -1)
            {

            }

            else if(a[i] != -1 && b[i] == -1)
            {
                if(c == -1)
                {

                }
            }

            else if(a[i] != -1 && b[i] != -1)
            {
                if(c == -1) c = b[i]-a[i]-1;
                else if(c != b[i]-a[i]-1)
                {
                        cout << "No";
                        return 0;
                }
            }
        }
    }

    return 0;
}
