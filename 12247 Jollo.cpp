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
    int c[3],d[2];
    bool cards[53];
    int strt = -1,i;
    while(scanf("%d %d %d %d %d",&c[0],&c[1],&c[2],&d[0],&d[1]),(c[0]|c[1]|c[2]|d[0]|d[1]))
    {
        strt = -1;
        sort(c,c+3);
        sort(d,d+2);
        fill(cards,cards+53,false);
        cards[0] = true;
        cards[c[0]] = cards[c[1]] = cards[c[2]] = cards[d[0]] = cards[d[1]] = true;
        if(d[0] > c[2]) strt = 0;
        else if(d[0] > c[1] && d[1] < c[2]) strt = c[1];
        else if(d[0] > c[1] && d[1] > c[2]) strt = c[1];
        else if(d[1] > c[2]) strt = c[2];

        if(strt != -1)
        {
            iter(i,strt,53,1)
            {
                if(!cards[i]) break;
            }
            strt = i;
            if(strt == 53) strt = -1;
        }
        printf("%d\n",strt);
    }
    return 0;
}
