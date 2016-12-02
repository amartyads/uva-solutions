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
    int i;
    iter(i,0,t,1)
    {
        int n; si(n);
        int miles = 0, juice = 0;
        while(n--)
        {
            int temp; si(temp);
            miles += ((temp / 30) + 1) * 10;
            juice += ((temp / 60) + 1) * 15;
        }
        printf("Case %d: ",i+1);
        if(miles <= juice)
            printf("Mile ");
        if(miles >= juice)
            printf("Juice ");
        printf("%d\n",min(miles,juice));
    }
    return 0;
}
