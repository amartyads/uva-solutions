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
    char n1[27],n2[27];
    while(gets(n1)!=NULL)
    {
        gets(n2);
        int s1 = 0,s2 = 0;
        int i = 0;
        iter(i,0,strlen(n1),1)
        {
            if(n1[i] >= 'a' && n1[i] <= 'z')
                s1 += n1[i]-'a'+1;
            if(n1[i] <= 'Z' && n1[i] >= 'A')
                s1 += n1[i]-'A'+1;
        }
        iter(i,0,strlen(n2),1)
        {
            if(n2[i] >= 'a' && n2[i] <= 'z')
                s2 += n2[i]-'a'+1;
            if(n2[i] <= 'Z' && n2[i] >= 'A')
                s2 += n2[i]-'A'+1;
        }
        s1%=9;
        s2%=9;
        s1=(s1==0)?9:s1;
        s2=(s2==0)?9:s2;
        int mx = max(s1,s2);
        int mn = min(s1,s2);
        float ans = ((float)mn/mx)*100;
        printf("%.2f %\n",ans);
    }
    return 0;
}
