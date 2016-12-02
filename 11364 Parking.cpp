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
    int t; si(t);
    while(t--)
    {
        int n; si(n);
        int nums[n];
        int i = 0;
        iter(i,0,n,1) si(nums[i]);
        sort(nums,nums+n);
        printf("%d\n",(nums[n-1]-nums[0])*2);
    }
    return 0;
}
