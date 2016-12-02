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
char sinp[100001], sop[100001],temp[100001];
int main()
{
    int ct = 0; ll i = 0,ind = 0;
    while(gets(sinp))
    {
        //gets(sinp);
        //if(sscanf(sinp,"%s",temp)==EOF) break;
        ll num = strlen(sinp);
        iter(i,0,num,1)
        {
            if(sinp[i]=='\"' && ct == 0)
            {
                ct++;
                sop[ind++] = '`';
                sop[ind++] = '`';
            }
            else if(sinp[i] == '\"' && ct == 1)
            {
                ct--;
                sop[ind++] = '\'';
                sop[ind++] = '\'';
            }
            else sop[ind++] = sinp[i];
        }
        sop[ind++] = '\n';
        printf("%s",sop);
        seto(sop,ind+1,'\0');
        ind = 0;
    }
    return 0;
}
