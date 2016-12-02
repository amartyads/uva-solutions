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
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int n;
    while(si(n) && (n>=0))
    {
        int i,j,cur;
        int lim = sqrt(n);
        bool found = false;
        ited(i,lim+1,1,1)
        {
            cur = n;
            iter(j,0,i,1)
            {
                cur--;
                if(cur%i!=0) break;
                cur /= i;
                cur *= (i-1);
            }
            if(cur%i == 0)
            {
                found = true;
                break;
            }
        }
        printf("%d coconuts, ",n);
        if(found)
            printf("%d people and 1 monkey\n",i);
        else
            printf("no solution\n");
    }
    return 0;
}
