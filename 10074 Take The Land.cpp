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
    int mat[110][110];
    int m,n;
    while(scanf("%d %d",&m,&n) == 2 && (m|n))
    {
        int i,j,k,l;
        iter(i,0,m,1)
        {
            iter(j,0,n,1)
            {
                si(mat[i][j]);
                if(mat[i][j] == 1) mat[i][j] = -1e5;
                else mat[i][j] = 1;
                if(i > 0) mat[i][j] += mat[i-1][j];
                if(j > 0) mat[i][j] += mat[i][j-1];
                if(i > 0 && j > 0) mat[i][j] -= mat[i-1][j-1];
            }
        }
        int maxs = 0;
        int sum;
        iter(i,0,m,1) iter(j,0,n,1)
        iter(k,i,m,1) iter(l,j,n,1)
        {
            sum = mat[k][l];
            if(i > 0) sum -= mat[i-1][l];
            if(j > 0) sum -= mat[k][j-1];
            if(i > 0 && j > 0) sum += mat[i-1][j-1];
            //cout << sum << " ";
            maxs = max(maxs,sum);
        }
        cout << maxs << endl ;
    }
    return 0;
}
