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

#define gc getchar_unlocked
bool scanints(int &x, int &y)
{
    register int c = gc();
    if(c == EOF) return false;
    x = 0;
    y = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {y = (y<<1) + (y<<3) + c - 48;}
    return true;
}
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int m,n;
    while(scanints(m,n))
    {
        printf("%d\n",(m*n)-1);
    }
    return 0;
}
