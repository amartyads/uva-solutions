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
    int t; si(t);int x = 0;
    int eggs[40];
    while(t--)
    {
        int n,p,q;
        si(n);si(p);si(q);
        int i;
        iter(i,0,n,1) si(eggs[i]);
        int ct = 0;
        iter(i,0,n,1)
        {
            p-=1;
            q-=eggs[i];
            if(p < 0 || q < 0) break;
            else ct++;
        }
        printf("Case %d: %d\n",++x,ct);
    }
    return 0;
}
