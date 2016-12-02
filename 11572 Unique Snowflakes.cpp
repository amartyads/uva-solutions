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
    int n; si(n);
    ll temp,mx,sz,lef,i,ls;
    ll len;
    map<ll,ll> snow;
    while(n--)
    {
        sll(len);
        snow.clear();
        lef = 0;
        mx = 0;
        sz = 0;
        iter(i,1,len+1,1)
        {
            sll(temp);
            ls = snow[temp];
            if(snow[temp] > 0)
            {
                lef = max(lef,ls);
                sz = i - lef - 1;
            }
            sz++;
            snow[temp] = i;
            mx = max(sz,mx);
        }
        printf("%lld\n",mx);
    }
    return 0;
}
