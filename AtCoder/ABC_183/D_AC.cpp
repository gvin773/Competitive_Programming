#define onlycc ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long ll;

int n, w, ending = 0;

pair<pair<int, int>, int> people[200000];
multiset<pair<int,int>> s;
int main()
{
    onlycc;
    cin >> n >> w;
    for(int i = 0; i < n; i++)
    {
        cin >> people[i].first.first >> people[i].first.second >> people[i].second;
        ending = max(ending, people[i].first.second);
    }

    sort(people, people+n);

    ll sum = 0, cnt = 0;
    for(int t = 0; t <= ending; t++)
    {
        if(s.size() != 0)
        {
        while(s.begin()->first <= t)
        {
            sum -= (*s.begin()).second;
            s.erase(s.begin());
            if(s.size() == 0) break;
        }
        }

        while(cnt < n && t == people[cnt].first.first)
        {
            sum += people[cnt].second;
            s.insert(make_pair(people[cnt].first.second, people[cnt].second));
            if(sum > w) goto finish;
            cnt++;
        }

        if(cnt == n) break;
    }

    cout << "Yes";
    return 0;

    finish:
        cout << "No";
    return 0;
}

