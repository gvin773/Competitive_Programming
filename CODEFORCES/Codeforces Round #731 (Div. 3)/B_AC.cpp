#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int t;
string str;

int main()
{
    onlycc;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> str;
        int head = 0, tail = str.size()-1;
        char now = 'a' + str.size()-1;
        bool flag = false;
        while(head != tail)
        {
            if(str[head] == now)
            {
                now--;
                head++;
                continue;
            }
            if(str[tail] == now)
            {
                now--;
                tail--;
                continue;
            }
            flag = true;
            break;
        }
        if(head == tail && !flag) cout << (str[head] == 'a' ? "YES\n" : "NO\n");
        if(flag) cout << "NO\n";
    }

    return 0;
}
