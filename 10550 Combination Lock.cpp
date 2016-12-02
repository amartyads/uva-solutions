#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d",&a);
#define sli(a) scanf("%I32d",&a);
#define sll(a) scanf("%I64d",&a);
using namespace std;
int main()
{
    int n;si(n);
    char init[n+1],fin[n+1];
    getchar();
    gets(init); gets(fin);
    int i = 0;
    int tot = 0;
    iter(i,0,n,1)
    {
        int mn = min(init[i] - 'a', fin[i] - 'a');
        int mx = max(init[i] - 'a', fin[i] - 'a');
        int dif1 = mx - mn;
        int dif2 = mn - mx + 10;
        tot += min(dif1,dif2);
    }
    printf("%d",tot);
    return 0;
}
