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
    int n;
    ll arr[110][110];
    while(si(n) == 1 && n)
    {
        ll maxS = -127*100*100;
        int i,j;
        iter(i,0,n,1)
        {
            iter(j,0,n,1)
            {
                sll(arr[i][j]);
                if(i > 0) arr[i][j] += arr[i-1][j];
                if(j > 0) arr[i][j] += arr[i][j-1];
                if(i > 0 && j > 0) arr[i][j] -= arr[i-1][j-1];
            }
        }
        int k,l;
        ll sum;
        iter(i,0,n,1) iter(j,0,n,1)
        iter(k,i,n,1) iter(l,j,n,1)
        {
            sum = arr[k][l];
            if(i > 0) sum -= arr[i-1][l];
            if(j > 0) sum -= arr[k][j-1];
            if(i > 0 && j > 0) sum += arr[i-1][j-1];
            maxS = max(maxS,sum);
        }
        printf("%lld\n",maxS);
    }
    return 0;
}
