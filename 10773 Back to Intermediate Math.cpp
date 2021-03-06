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
    int n;si(n);
    int i;
    float d,v,u,st,per,ans;
    iter(i,0,n,1)
    {
        sf(d);sf(v);sf(u);
        printf("Case %d: ",i+1);
        if(v >= u) printf("can't determine\n");
        else
        {
            st = d/u;
            per = d/(sqrt((u*u)-(v*v)));
            ans = abs(per-st);
            if(ans == 0) printf("can't determine\n");
            else printf("%.3f\n",ans);
        }
    }
    return 0;
}
