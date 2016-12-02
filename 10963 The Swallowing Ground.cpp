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
    int t; si(t);
    while(t--)
    {
        getchar();
        int n; si(n);
        bool closable = true;
        int t1,t2;
        n--;
        si(t1);si(t2);
        int gap = abs(t1-t2);
        while(n--){si(t1);si(t2);if(gap!=abs(t1-t2))closable = false;}
        if(closable) puts("yes");
        else puts("no");
        if(t) printf("\n");
    }
    return 0;
}
