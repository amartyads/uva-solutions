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
#include <sstream>
#include <string>
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
    int v,v0;
    while(scanf("%d %d",&v,&v0) && (v|v0))
    {
        double muxD = 0;
        int muxN = 0, i = 1;
        bool found = false;
        while((float)v/i > v0)
        {
            double D = 0.3 * sqrt((double)v/i - v0);
            D *= i;
            if(muxD < D)
            {
                muxD = D;
                muxN = i;
            }
            else if(muxD == D)
            {
                muxN = 0;
            }
            i++;
        }
        printf("%d\n",muxN);
    }
    return 0;
}
