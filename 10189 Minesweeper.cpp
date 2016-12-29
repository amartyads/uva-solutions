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
int brd[110][110];
int i,j;
int l,w;
char inp[110];
int ct = 0;
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    while(scanf("%d %d",&l,&w),(l|w))
    {
        iter(i,1,l+1,1)
        {
            scanf("%s",inp);
            iter(j,1,w+1,1)
            {
                brd[i][j] = 0;
                if(inp[j-1] == '*')
                    brd[i][j] = -20;
            }
        }
        iter(i,1,l+1,1)
        {
            iter(j,1,w+1,1)
            {
                if(brd[i][j] < 0)
                {
                    brd[i-1][j-1]++;
                    brd[i][j-1]++;
                    brd[i+1][j-1]++;
                    brd[i-1][j]++;
                    brd[i+1][j]++;
                    brd[i-1][j+1]++;
                    brd[i][j+1]++;
                    brd[i+1][j+1]++;
                }
            }
        }
        if(ct != 0)
            printf("\n");
        printf("Field #%d:\n",++ct);
        iter(i,1,l+1,1)
        {
            iter(j,1,w+1,1)
            {
                if(brd[i][j] < 0)
                    printf("*");
                else
                    printf("%d",brd[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
