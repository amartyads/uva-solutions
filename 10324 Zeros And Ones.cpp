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
#include <limits>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int zyzzy = 0; zyzzy < n; zyzzy++) a[zyzzy] = x
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
    char inp[1000001],temp[10];
    ll t = 0;
    bool ok = true;
    while(scanf("%s",inp)!=EOF && strcmp(inp,"\n"))
    {
        t++;
        ll num = strlen(inp);
        ll que,n1,n2,mn,mx,i;
        char cur;
        sll(que);
        printf("Case %lld:\n",t);
        while(que--)
        {
            sll(n1);sll(n2);
            mn = min(n1,n2);
            mx = max(n1,n2);
            cur = inp[mx];
            iter(i,mn,mx,1)
            {
                if(inp[i]!=cur)
                {
                    ok = false;
                    break;
                }
            }
            if(ok) puts("Yes");
            else puts("No");
            ok = true;
        }
        gets(temp);
    }
    return 0;
}
