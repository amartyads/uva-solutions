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
    int n;si(n);
    char cards[52][3];
    int i,j,k;
    iter(i,0,n,1)
    {
        iter(j,0,52,1)
            scanf("%s",cards[j]);
        int Y = 0, cnt = 0, last = -1;
        ited(j,25,-1,1)
        {
            int t = (cards[j][0]>='0'&&cards[j][0]<='9')?cards[j][0]-'0':10;
            Y += t;
            j -= (10 - t);
            cnt++;
            last = j;
            if(cnt > 2) break;
        }
        if(Y <= last)
            printf("Case %d: %s\n",i+1,cards[Y - 1]);
        else
            printf("Case %d: %s\n",i+1,cards[25 + (Y - last)]);
    }
    return 0;
}
