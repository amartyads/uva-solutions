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
    int noB, deb;
    while(true)
    {
        si(noB);si(deb);
        if(!(noB|deb)) break;
        int money[noB+1];
        int i = 0;
        iter(i,1,noB+1,1) si(money[i]);
        int t1,t2,m;
        iter(i,0,deb,1){si(t1);si(t2);si(m);money[t1]-=m; money[t2]+=m;}
        bool ok = true;
        iter(i,1,noB+1,1) {if(money[i]<0) ok = false;}
        if(ok)puts("S");
        else puts("N");
    }
    return 0;
}
