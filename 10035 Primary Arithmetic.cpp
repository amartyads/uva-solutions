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
    ll a,b;
    int cry, cryct;
    while(scanf("%lld %lld",&a,&b),(a|b))
    {
        cry = cryct = 0;
        while(a > 0 || b > 0)
        {
            if(a%10 + b%10 + cry > 9)
            {
                cryct++;
                cry = 1;
            }
            else
                cry = 0;
            a /= 10;
            b /= 10;
        }
        if(cryct == 0)
            printf("No ");
        else
            printf("%d ",cryct);
        printf("carry operation");
        if(cryct <= 1)
            printf(".\n");
        else
            printf("s.\n");
    }
    return 0;
}
