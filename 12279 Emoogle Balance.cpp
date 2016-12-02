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
#define PI 3.1415926
using namespace std;
int main()
{
    int t,i;
    i = 1;
    while(true)
    {
        si(t);
        if(!t) break;
        int ct = 0;
        int temp;
        while(t--){si(temp);if(temp == 0) ct--; else ct++;}
        printf("Case %d: %d\n",i,ct);
        i++;
    }
    return 0;
}
