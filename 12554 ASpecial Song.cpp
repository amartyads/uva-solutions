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
    int n; si(n);
    char names[n][101];
    int i;
    iter(i,0,n,1){scanf("%s",names[i]);}
    int ns = n;
    i = 0;
    while(ns > 0)
    {
        int j = 0;
        iter(j,0,2,1)
        {
            printf("%s: Happy\n",names[i%n]);
            ns--;
            i++;
            printf("%s: birthday\n",names[i%n]);
            ns--;
            i++;
            printf("%s: to\n",names[i%n]);
            ns--;
            i++;
            printf("%s: you\n",names[i%n]);
            ns--;
            i++;
        }
        printf("%s: Happy\n",names[i%n]);
        ns--;
        i++;
        printf("%s: birthday\n",names[i%n]);
        ns--;
        i++;
        printf("%s: to\n",names[i%n]);
        ns--;
        i++;
        printf("%s: Rujia\n",names[i%n]);
        ns--;
        i++;
        printf("%s: Happy\n",names[i%n]);
        ns--;
        i++;
        printf("%s: birthday\n",names[i%n]);
        ns--;
        i++;
        printf("%s: to\n",names[i%n]);
        ns--;
        i++;
        printf("%s: you\n",names[i%n]);
        ns--;
        i++;
    }
    return 0;
}
