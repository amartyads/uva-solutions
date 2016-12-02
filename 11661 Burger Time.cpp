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
    int n;
    while(scanf("%d\n",&n) && n)
    {
        int i;
        ll minlen = 200011;
        char lasthit = 'A';
        int lastpos = -1;
        char c;
        iter(i,0,n,1)
        {
            scanf("%c",&c);
            //printf("%c",c);
            if(c == 'Z')
                minlen = 0;
            else if(c == '.')
            {
            }
            else if(c == lasthit)
                lastpos = i;
            else
            {
                if(lastpos!=-1)
                {
                    minlen = minlen > i-lastpos ? i-lastpos : minlen;
                    lastpos = i;
                    lasthit = c;
                }
                else
                {
                    lastpos = i;
                    lasthit = c;
                }
            }
        }
        //scanf("%c",&c);
        printf("%lld\n",minlen);
    }
    return 0;
}
