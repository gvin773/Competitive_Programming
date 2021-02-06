#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int h, w, cnt, first;
string grid[10];
pair<int, int> start, arrow, now, dir;

bool check_out(int x, int y)
{
    if(!(0 <= x && x < h)) return true;
    if(!(0 <= y && y < w)) return true;
    return false;
}

void moving()
{
    if(dir == make_pair(1, 0))
    {
        pair<int, int> next = {now.first+0, now.second+1};
        if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
        {
            now = next;
            dir = {0, 1};
            cnt++;
        }
        else
        {
            next = {now.first+dir.first, now.second+dir.second};
            if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
            {
                now = next;
            }
            else
            {
                dir = {0, -1};
                cnt++;
            }
        }
    }

    else if(dir == make_pair(-1, 0))
    {
        pair<int, int> next = {now.first+0, now.second-1};
        if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
        {
            now = next;
            dir = {0, -1};
            cnt++;
        }
        else
        {
            next = {now.first+dir.first, now.second+dir.second};
            if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
            {
                now = next;
            }
            else
            {
                dir = {0, 1};
                cnt++;
            }
        }
    }

    else if(dir == make_pair(0, 1))
    {
        pair<int, int> next = {now.first-1, now.second+0};
        if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
        {
            now = next;
            dir = {-1, 0};
            cnt++;
        }
        else
        {
            next = {now.first+dir.first, now.second+dir.second};
            if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
            {
                now = next;
            }
            else
            {
                dir = {1, 0};
                cnt++;
            }
        }
    }

    else
    {
        pair<int, int> next = {now.first+1, now.second+0};
        if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
        {
            now = next;
            dir = {1, 0};
            cnt++;
        }
        else
        {
            next = {now.first+dir.first, now.second+dir.second};
            if(!check_out(next.first, next.second) && grid[next.first][next.second] == '.')
            {
                now = next;
            }
            else
            {
                dir = {-1, 0};
                cnt++;
            }
        }
    }

    if(now == start && dir == arrow) first = 1;
}

void get_start()
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(i != 0 && grid[i-1][j] == '#')
            {
                start = {i, j};
                arrow = {0, 1};
                return;
            }

            if(j != 0 && grid[i][j-1] == '#')
            {
                start = {i, j};
                arrow = {-1, 0};
                return;
            }

            if(i != h-1 && grid[i+1][j] == '#')
            {
                start = {i, j};
                arrow = {0, -1};
                return;
            }

            if(j != w-1 && grid[i][j+1] == '#')
            {
                start = {i, j};
                arrow = {1, 0};
                return;
            }
        }
    }
}

int main()
{
    onlycc;
    cin >> h >> w;
    for(int i = 0; i < h; i++) cin >> grid[i];
    get_start();


    now = start, dir = arrow;
    while(first != 1)
    {
        moving();
    }

    cout << cnt;

    return 0;
}
