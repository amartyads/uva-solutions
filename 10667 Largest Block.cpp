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
    int t; si(t);
    int mat[101][101];
    while(t--)
    {
        int i,j,k,l;
        int s,b;
        int r1,c1,r2,c2;
        si(s);si(b);
        iter(i,1,s+1,1) iter(j,1,s+1,1) mat[i][j] = 1;
        while(b--)
        {
            si(r1);si(c1);si(r2);si(c2);
            iter(i,r1,r2+1,1) iter(j,c1,c2+1,1) mat[i][j] = -1e5;
        }
        iter(i,1,s+1,1) iter(j,1,s+1,1)
        {
            if(i > 1) mat[i][j] += mat[i-1][j];
            if(j > 1) mat[i][j] += mat[i][j-1];
            if(i > 1 && j > 1) mat[i][j] -= mat[i-1][j-1];
        }
        int sum = 0, maxs = 0;
        iter(i,1,s+1,1) iter(j,1,s+1,1)
        iter(k,i,s+1,1) iter(l,j,s+1,1)
        {
            sum = mat[k][l];
            if(i > 1) sum -= mat[i-1][l];
            if(j > 1) sum -= mat[k][j-1];
            if(i > 1 && j > 1) sum += mat[i-1][j-1];
            maxs = max(maxs,sum);
        }
        printf("%d\n",maxs);
    }
    return 0;
}
