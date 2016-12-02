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
    int t;
    while(si(t)!=EOF)
    {
        if(t == 0) puts("Jolly");
        else
        {
            bool nums[t];seto(nums,t,false);
            nums[0] = true;
            int t1,t2;
            int i = 0;
            si(t1);
            iter(i,0,t-1,1)
            {
                si(t2);
                nums[abs(t2-t1)] = true;
                t1 = t2;
            }
            bool jolly = true;
            iter(i,0,t,1) if(!nums[i]) jolly = false;
            if(jolly) puts("Jolly");
            else puts("Not jolly");
        }
    }
    return 0;
}
