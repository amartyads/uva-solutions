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
    ll num,numst;
    ll a = 0, b = 0;
    int i;
    bool upd;
    while(sll(num)!=EOF && num)
    {
        numst = num;
        i = 0;
        upd = true;
        a = 0;
        b = 0;
        while(num > 0)
        {
            if(num&1)
            {
                if(upd)
                {
                    int temp = 1 << i;
                    a |= temp;
                    upd = false;
                }
                else upd = true;
            }
            num >>= 1;
            i++;
        }
        b = a ^ numst;
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
