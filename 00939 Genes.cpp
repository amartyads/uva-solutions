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
#define si(a) scanf("%d",&a)
#define sli(a) scanf("%ld",&a)
#define sll(a) scanf("%lld",&a)
#define slu(a) scanf("%llu",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
map<string,int> genestat;
map<string, vector<string> > parents;
int getGene(string name)
{
    if(genestat[name] != 0) return genestat[name];
    else
    {
        int ans = 0;
        for(auto it = parents[name].begin(); it != parents[name].end(); ++it)
        {
            ans += (genestat[*it] = getGene(*it));
        }
        if(ans == -2 || ans == 0)
            genestat[name] = ans = -1;
        else if(ans == 1 || ans == 2)
            genestat[name] = ans = 1;
        else
            genestat[name] = ans = 2;
        return ans;
    }
}
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int n; si(n); cin.ignore();
    map<int, string> lookup;
    lookup[-1] = "non-existent";
    lookup[1] = "recessive";
    lookup[2] = "dominant";
    string s1,s2;
    while(n--)
    {
        cin >> s1 >> s2;
        if(s2 == "dominant")
            genestat[s1] = 2;
        else if(s2 == "recessive")
            genestat[s1] = 1;
        else if(s2 == "non-existent")
            genestat[s1] = -1;
        else
            parents[s2].push_back(s1);
    }
    for(auto it = parents.begin(); it != parents.end(); it++)
    {
        string temp = it->first;
        getGene(temp);
        //cout << temp << t << endl;
    }
    for(auto it = genestat.begin(); it != genestat.end(); ++it)
    {
        cout << it->first << " " << lookup[it->second] << endl;
    }
    return 0;
}
