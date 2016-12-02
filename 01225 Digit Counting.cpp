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
int dp[10010][10] = {0};
void preprocess()
{
    int i,ist;
    dp[1][1] = 1;
    iter(i,2,10010,1)
    {
        ist = i;
        copy(dp[i-1],dp[i-1]+10,dp[i]);
        while(ist > 0)
        {
            dp[i][ist%10]++;
            ist /= 10;
        }
    }
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int n; si(n);int x,i;
    preprocess();
    while(n--)
    {
        si(x);
        printf("%d",dp[x][0]);
        iter(i,1,10,1)
        {
            printf(" %d",dp[x][i]);
        }
        printf("\n");
    }
    return 0;
}
