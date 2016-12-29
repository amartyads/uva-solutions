#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <numeric>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <sstream>
#include <string>
#include <regex>
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
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    bitset<1000000 + 10> lel;
    int n,m,i,j,k;
    bool conf;
    while(scanf("%d %d",&n,&m),(n|m))
    {
        lel.reset();
        conf = false;
        li st,et,rep;
        iter(i,0,n,1)
        {
            sli(st);sli(et);
            if(!conf)
            {
                iter(j,st,et,1)
                {
                    if(lel[j] == 1)
                    {
                        conf = true;
                        break;
                    }
                    lel[j] = 1;
                }
            }
        }
        iter(i,0,m,1)
        {
            sli(st);sli(et);sli(rep);
            if(!conf)
            {
                iter(k,0,1000000,rep)
                {
                    if(st+k > 1000000) break;
                    iter(j,st+k,min(et+k,(li)1000000),1)
                    {
                        if(lel[j] == 1)
                        {
                            conf = true;
                            break;
                        }
                        lel[j] = 1;
                    }
                }
            }
        }
        if(conf) puts("CONFLICT");
        else puts("NO CONFLICT");
    }
    return 0;
}
