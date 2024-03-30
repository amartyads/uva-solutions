#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <numeric>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <sstream>
#include <string>
#include <regex>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d\n",&a)
#define sli(a) scanf("%ld",&a)
#define sll(a) scanf("%lld",&a)
#define slu(a) scanf("%llu",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int n;
    string s;
    char temp;
    map<char,int> freqCt;
    si(n);
    while (n--)
    {
        getline(cin,s);
        for(auto it=s.begin(); it!=s.end(); ++it)
        {
            temp = toupper(*it);
            if(temp >= 'A' && temp <= 'Z')
                freqCt[temp]++;
        }
    }
    vector<pair<char,int>> pairs;
    for (auto it=freqCt.begin();it!= freqCt.end();++it)
        pairs.push_back(*it);

    sort(pairs.begin(),pairs.end(),[=](std::pair<char,int>& a, std::pair<char,int>& b)
    {
        if(a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    }
    );
    for(auto it=pairs.begin();it!=pairs.end();++it)
        printf("%c %d\n",it->first,it->second);
    return 0;
}
