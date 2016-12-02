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
#define sll(a) scanf("%lld",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int n,t; si(t);
    int arr[] = {6, 7, 9, 0, 2, 3, 5, 6, 8, 9, 1, 2, 4, 5, 7, 8, 0, 1, 3, 4};
    while(t--)
    {
        si(n);
        int ans = arr[n > -118?(n+1000)%20:(19-((n+1014)%20))];
        printf("%d\n",ans);
    }
    return 0;
}
