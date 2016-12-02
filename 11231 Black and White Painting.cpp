
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
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int a,b,br;
    while(scanf("%d %d %d",&a,&b,&br),(a|b|br))
    {
        if(a < 8 || b < 8)
        {
            printf("0");
            continue;
        }
        a -= 7; b -= 7;
        ll area = a*b;
        ll nbr = area / 2;
        ll brt = area - nbr;
        if(br) printf("%lld\n",brt);
        else printf("%lld\n",nbr);
    }
    return 0;
}
