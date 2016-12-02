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
    int i = 1;
    while(t--)
    {
        printf("Case %d: ",i);
        int a,b,c;
        si(a);si(b);si(c);
        if(a > 20 || b > 20 || c > 20)
            printf("bad\n");
        else
            printf("good\n");
        i++;
    }
    return 0;
}
