#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<char> chekEqual[3];
int value['z'-'a'+1];
int countValue[3];

bool isOverlap(int section,char now) {
    for (int i = 0; i < chekEqual[section].size() - 1; i++) {
        if (now == chekEqual[section][i])
            return true;
    }
    return false;
}

int isZero(int section) {
    int len = chekEqual[section].size();

    if (len == 0)
        return section == 1 ? 1 : 0;

    int post = chekEqual[section][0];
    if (post != '1' && post != '0')
        post = value[post-'a'];
    else
        post -= '0';
    for (int i = 1; i < len; i++) {
        int now = chekEqual[section][i];

        if (now != '1' or now != '0')
            now = value[now - 'a'];
        else
            now -= '0';

        post = (now == post);
    }
    return post;
}
int makeCase(int post,int pos) {
    if (pos == chekEqual[0].size())
        return isZero(post ? 1 : 2);
    char now = chekEqual[0][pos];
    int ret;
    if (pos == 0) {
        if (now == '1') {
            ret = makeCase(1, pos + 1);
        }
        else if (now == '0') {
            ret = makeCase(0, pos + 1);
        }
        else {
            value[chekEqual[0][pos]-'a'] = 1;
            ret = makeCase(1, pos + 1);
            value[chekEqual[0][pos] - 'a'] = 0;
            ret += makeCase(0, pos + 1);
        }
    }
    else if (value[chekEqual[0][pos] - 'a'] != -1 && now <= 'z' && now >= 'a') {
        ret = makeCase((value[chekEqual[0][pos] - 'a'] == post), pos + 1);
    }
    else{
        if (now == '1') {
            ret = makeCase((1 == post), pos + 1);
        }
        else if (now == '0') {
            ret = makeCase((0 == post), pos + 1);
        }
        else {
            value[chekEqual[0][pos] - 'a'] = 1;
            ret = makeCase((1 == post), pos + 1);

            value[chekEqual[0][pos] - 'a'] = 0;
            ret += makeCase((0 == post), pos + 1);
        }
    }
    value[chekEqual[0][pos] - 'a'] = -1;
    return ret;
}

int main()
{
    int n;
    scanf("%d",&n);

    string form;
    cin >> form;

    string::iterator iter = form.begin();

    int section = 0;
    while (iter != form.end()) {
        char now = *iter;
        if (now == '?' or now == ':')
            section++;

        else if (now!= '=') {
            chekEqual[section].push_back(now);
            if (!isOverlap(section, now) && now != '1' && now != '0')
                countValue[section]++;
        }
        iter++;
    }

    for (int i = 0; i < 'z' - 'a' + 1; i++)
        value[i] = -1;

    printf("%ld",(long)pow(2,n)-makeCase(-1,0));
    return 0;
}
