#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <sstream>
#include <string>
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
li s,d,ans;
li soFar[12];
bool getAns(int month)
{
    if(month > 4 && accumulate(soFar+month-5,soFar+month,0) > 0)
        return false;
    if(month == 12) return true;
    soFar[month] = s;
    if(!getAns(month+1))
    {
        soFar[month] = -d;
        return getAns(month+1);
    }
    return true;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    while(scanf("%ld %ld",&s,&d) == 2)
    {
        fill(soFar,soFar+12,0);
        getAns(0);
        ans = accumulate(soFar,soFar+12,0);
        if(ans <= 0) puts("Deficit");
        else printf("%d\n",ans);
    }
    return 0;
}
