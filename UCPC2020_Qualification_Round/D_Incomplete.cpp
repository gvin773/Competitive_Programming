#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

vector<int> nodes[300001];
stack<int> list;
int numd, numg, counter;
char ret[10];

void DFS()
{
    stack<int> list;
    for(int k = 1; k <= n; k++)
    {
        list.push(k);

        counter = 0;
        for(int counter = 0; !list.empty(); )
        {
            int now = list.top();
            list.pop();
            counter++;

            for(int i = 0; i < nodes[now].size(); i++)
            {
                int next = nodes[now][i];
                list.push(next);
            }
        }
    }
}

int main()
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        nodes[a].push_back(b);
    }

    DFS();
    printf("%s", ret);

    return 0;
}
