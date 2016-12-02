#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <limits>
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
    int n;
    while(si(n) == 1 && n)
    {
        int i,temp;
        int ans = 0, sum = 0;
        iter(i,0,n,1)
        {
            si(temp);
            sum += temp;
            ans = max(ans,sum);
            if(sum < 0) sum = 0;
        }
        if(!ans) printf("Losing streak.\n");
        else printf("The maximum winning streak is %d.\n",ans);
    }
    return 0;
}
