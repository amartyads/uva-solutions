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
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int i = 0; i < n; i++) a[i] = x
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d",&a)
#define sli(a) scanf("%I32d",&a)
#define sll(a) scanf("%I64d",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int i,t;si(t);
    iter(i,0,t,1)
    {
        int noW;si(noW);
        int cur; si(cur);
        int lo=0,hi=0;
        noW--;
        while(noW--)
        {
            int temp; si(temp);
            if(cur < temp)
                hi++;
            else if(cur > temp)
                lo++;
            cur = temp;
        }
        printf("Case %d: %d %d\n",i+1,hi,lo);
    }
    return 0;
}
