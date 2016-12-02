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
#include <limits>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int zyzzy = 0; zyzzy < n; zyzzy++) a[zyzzy] = x
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

    int n,m,t=0;

    char temp[81];
    char best[81],cur[81];
    float bestP,curP;
    float bestComp=0,curComp;
    int curNum;
    while(true)
    {
        t++;
        si(n);si(m);
        if(n==0&&m==0)break;
        int i = 0,j = 0;
        gets(temp);
        iter(i,0,n,1) gets(temp);
        bestP = 1E37;
        bestComp = 0.0;
        iter(i,0,m,1)
        {
            gets(cur);
            sf(curP);
            si(curNum);
            curComp = (float)curNum/n;
            if(curComp > bestComp || (curComp == bestComp && curP < bestP))
            {
                strcpy(best,cur);
                bestP = curP;
                bestComp = curComp;
            }
            gets(temp);
            iter(j,0,curNum,1) gets(temp);
        }
        if(t!=1) printf("\n");
        printf("RFP #%d\n%s\n",t,best);
    }
    return 0;
}
