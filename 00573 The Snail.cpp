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
#define sli(a) scanf("%ld",&a)
#define sll(a) scanf("%lld",&a)
#define slu(a) scanf("%llu",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    float h,u,d,f;
    while(true)
    {
        sf(h);sf(u);sf(d);sf(f);
        if(h==0) break;
        int i = 1;
        float start = 0;
        start += u;
        float loss = (u * f)/100;
        while(start <= h)
        {
            start -= d;
            if(start < 0) break;
            i++;
            u -= loss;
            if(u < 0) u = 0;
            start += u;
        }
        if(start < 0)
            printf("failure ");
        else
            printf("success ");
        printf("on day %d\n",i);
    }
    return 0;
}
