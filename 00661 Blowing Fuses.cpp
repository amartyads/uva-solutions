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
#define seto(a,n,x) for(int bartho = 0; bartho < n; bartho++) a[bartho] = x
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
    int n,m,c,i,seq=0;
    while(true)
    {
        seq++;
        si(n);si(m);si(c);
        if(n==0 & m==0 & c==0) break;
        int vals[n];
        bool on[n]; seto(on,n,false);
        iter(i,0,n,1) si(vals[i]);
        int mx = 0;
        int po = 0;
        bool blown = false;
        int temp;
        while(m--)
        {
            si(temp); temp--;
            if(on[temp])on[temp]=false; else on[temp]=true;
            if(on[temp])po+=vals[temp]; else po-=vals[temp];
            if(po > c) blown = true;
            mx = max(mx,po);
        }
        printf("Sequence %d\n",seq);
        if(blown) printf("Fuse was blown.\n");
        else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n",mx);
        printf("\n");
    }
    return 0;
}
