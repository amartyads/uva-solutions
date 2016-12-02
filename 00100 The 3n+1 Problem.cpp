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

#define UPLIM 1000001
using namespace std;
int arr[UPLIM];
int getCycle(ll i)
{
    if(i < UPLIM && arr[i]) return arr[i];
    else
    {
        if(i&1)
        {
            if(i < UPLIM)
            {
                arr[i] = 2 + getCycle((3*i + 1) >> 1);
                return arr[i];
            }
            else
            {
                return 2 + getCycle((3*i + 1) >> 1);
            }
        }
        else
        {
            if(i < UPLIM)
            {
                arr[i] = 1 + getCycle(i >> 1);
                return arr[i];
            }
            else
            {
                return 1 + getCycle(i >> 1);
            }
        }
    }
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    ull a,b,i,j,low,hi;
    int ans;
    fill(arr,arr+UPLIM,0);
    arr[1] = 1;
    arr[2] = 2;
    while(scanf("%lld %lld",&a,&b) == 2)
    {
        ans = 0;
        low = min(a,b);
        hi = max(a,b);
        iter(i,low,hi+1,1)
        {
            ans = max(ans, getCycle(i));
        }
        printf("%lld %lld %d\n",a,b,ans);
    }
    return 0;
}
