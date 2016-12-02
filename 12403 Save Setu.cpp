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
#define sli(a) scanf("%ld",&a)
#define sll(a) scanf("%lld",&a)
#define slu(a) scanf("%llu",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int t; si(t);
    int tot = 0;
    char c[10];
    while(t--)
    {
        scanf("%s",c);
        if(strcmp(c,"donate")==0){int temp; si(temp); tot += temp;}
        if(strcmp(c,"report")==0)printf("%d\n",tot);
    }
    return 0;
}
