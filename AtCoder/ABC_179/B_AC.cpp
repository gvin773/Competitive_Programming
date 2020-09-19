#define onlycc ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;

int n, cnt1, cnt2, cnt3;

int main()
{
    onlycc;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a == b && cnt1 == 0) cnt1 = 1;
        else if(a == b && cnt1 == 1 && cnt2 == 0) cnt2 = 1;
        else if(a == b && cnt2 == 1) cnt3 = 1;
        else
        {
            cnt1 = 0;
            cnt2 = 0;
        }
    }

    if(cnt3) cout << "Yes";
    else cout << "No";

    return 0;
}
