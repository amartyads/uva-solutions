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
    int m;
    bool lookup[101],curs[101];
    si(m);
    int to,ws;
    int cline,temp,i,j;
    char c;
    bool first = true;
    while(m--)
    {
        if(first) first  = false;
        else printf("\n");
        si(to); si(ws);
        fill(lookup,lookup+to+1,false);
        lookup[0] = true;
        while(ws--)
        {
            si(cline);
            fill(curs,curs+to+1,false);
            iter(i,0,cline*2,1)
            {
                si(temp);
                curs[temp] = true;
            }
            cin.ignore();
            scanf("%c",&c);
            bool setter;
            if(c == '=')
                setter = false;
            else
                setter = true;
            iter(i,1,to+1,1)
            {
                lookup[i] |= (setter ^ curs[i]);
                //printf("%d ",lookup[i]);
            }
        }
        int fct = 0, fInd = -1;
        iter(i,1,to+1,1)
        {
            if(!lookup[i])
            {
                fct++;
                fInd = i;
            }
        }
        if(fct == 1)
            printf("%d\n",fInd);
        else
            printf("0\n");
    }
    return 0;
}
