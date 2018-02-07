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
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int n;
    stringstream ss;
    string s;
    map<string, int> courses;
    int cs[5],i,mx,ct;
    while(si(n),n)
    {
        courses.clear();
        while(n--)
        {
            ss.clear();
            iter(i,0,5,1) si(cs[i]);
            sort(cs,cs+5);
            iter(i,0,5,1) ss << cs[i];
            ss >> s;
            courses[s]++;
        }
        mx = ct = 0;
        for(auto it = courses.begin(); it != courses.end(); ++it)
            mx = max(mx,it->second);
        for(auto it = courses.begin(); it != courses.end(); ++it)
            if(mx == it->second) ct+=mx;
        printf("%d\n",ct);
    }
    return 0;
}
