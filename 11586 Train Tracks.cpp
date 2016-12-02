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
    int n; scanf("%d\n",&n);
    char tracks[201];
    while(n--)
    {
        gets(tracks);
        int i;
        int len = strlen(tracks);
        int mct = 0, fct = 0;
        iter(i,0,len,1)
        {
            if(tracks[i]=='M')
                mct++;
            else if(tracks[i]=='F')
                fct++;
        }
        if(mct==fct && mct>1)
            puts("LOOP");
        else
            puts("NO LOOP");
    }
    return 0;
}
