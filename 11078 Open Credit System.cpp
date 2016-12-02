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
#include <sstream>
#include <string>
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
    int t;
    int vals[100010];
    si(t);
    while(t--)
    {
        int n; si(n);
        int i;
        iter(i,0,n,1) si(vals[i]);
        int mx = -2e6, mxdf = -2e6;
        iter(i,0,n-1,1)
        {
            mx = max(vals[i],mx);
            mxdf = max(mx-vals[i+1],mxdf);
        }
        printf("%d\n",mxdf);
    }
    return 0;
}
