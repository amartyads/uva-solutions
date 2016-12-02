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
    char dig[1000010];
    while(true)
    {
        gets(dig);
        if(!strcmp(dig,"END")) break;
        ll lastlen = -1, len = 0;
        int i = 0;
        if(strcmp(dig,"1") == 0) i = 1;
        else
        {
            while(true)
            {
                i++;
                len = strlen(dig);
                sprintf(dig,"%lld",len);
                if(len == lastlen) break;
                lastlen = len;
            }
        }
        printf("%d\n",i);
    }
    return 0;
}
