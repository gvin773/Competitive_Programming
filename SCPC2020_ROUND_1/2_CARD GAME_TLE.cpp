#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int t, n, k, dp[3001][3001][2], x[3001], y[3001];

int check(int cardx, int cardy, int player) //player0 == a, player1 == b
{
    if(dp[cardx][cardy][player] != 0) return dp[cardx][cardy][player];
    int ret = 1, temp = 0;
    if(cardx != 0)
    {
        if(cardx == 1 && cardy == 0)
            return dp[cardx][cardy][player] = player==0 ? 2 : 1;

        if(cardx == 2 && cardy == 0)
            return dp[cardx][cardy][player] = player==0 ? 1 : 2;

        int sum = x[cardx];
        for(int cnt = 1; sum <= k && cardx-cnt != -1; cnt++)
        {
            int t = check(cardx-cnt, cardy, (player+1)%2);

            sum += x[cardx-cnt];

            if(t == player+1)
            {
                ret = t;
                break;
            }

            else ret = t;
        }
    }

    if(cardy != 0)
    {
        if(cardy == 1 && cardx == 0)
            return dp[cardx][cardy][player] = player==0 ? 2 : 1;

        if(cardx == 0 && cardy == 2)
            return dp[cardx][cardy][player] = player==0 ? 1 : 2;

        int sum = y[cardy];
        for(int cnt = 1; sum <= k && cardy-cnt != -1; cnt++)
        {
            int t = check(cardx, cardy-cnt, (player+1)%2);

            sum += y[cardy-cnt];

            if(t == player+1)
            {
                ret = t;
                break;
            }

            else ret = t;
        }
    }

    return dp[cardx][cardy][player] = ret;
}

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;
        for(int j = 1; j <= n; j++)
            cin >> x[j];

        for(int j = 1; j <= n; j++)
            cin >> y[j];

        for(int j = n; j >= 0; j--) //x[j] y[k]
        {
            for(int k = n; k >= 0; k--)
            {
                int temp = check(j, k, 0);
            }
        }

        int casea = 0, caseb = 0;
        for(int j = 0; j <= n; j++)
        {
            for(int k = 0; k <= n; k++)
            {
                if(dp[j][k][0] == 1)
                    casea++;

                else if(dp[j][k][0] == 2)
                    caseb++;
            }
        }

        for(int j = 0; j <= n; j++)
        {
            for(int k = 0; k <= n; k++)
            {
                dp[j][k][0] = dp[j][k][1] = 0;
            }
        }

        cout << "Case #" << i+1 << '\n' << casea << " " << caseb << '\n';
    }

    return 0;
}
