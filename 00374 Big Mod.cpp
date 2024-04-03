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
    //freopen("1in.txt", "r", stdin);
    //freopen("1out.txt", "w", stdout);
    ull base, exp, mod, ans;
    while(scanf("%llu\n%llu\n%llu\n", &base, &exp, &mod) == 3)
    {
        if(mod == 1)
        {
            ans = 0;
        }
        else
        {
            ans = 1;
            base = base % mod;
            while(exp)
            {
                if(exp & 1)
                    ans = (ans * base) % mod;
                exp = exp >> 1;
                base = (base * base) % mod;
            }
        }
        printf("%llu\n",ans);
    }
    return 0;
}
