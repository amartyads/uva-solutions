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
    int t;
    li a,b,c,i,curP;
    si(t);
    int playPos[10000];
    int goTo[101],temp;
    while(t--)
    {
        sli(a); sli(b); sli(c);
        curP = 0;
        fill(goTo,goTo + 101,-1);
        iter(i,0,b,1)
        {
            si(temp);
            si(goTo[temp]);
        }
        fill(playPos, playPos+a,1);
        bool gameEnd = false;
        iter(i,0,c,1)
        {
            si(temp);
            if(!gameEnd)
            {
                playPos[curP] += temp;
                if(playPos[curP] < 100 && goTo[playPos[curP]] != -1)
                    playPos[curP] = goTo[playPos[curP]];
                if(playPos[curP] >= 100) gameEnd = true;
                curP++;
                curP %= a;
            }
        }
        iter(i,0,a,1)
        {
            printf("Position of player %ld is %d.\n",i+1,playPos[i] >= 100? 100 : playPos[i]);
        }
    }
    return 0;
}
