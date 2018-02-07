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
bool isPrime[35];
int n;
bool used[20];
int ring[20];
void popPrimes()
{
    int i,j;
    fill(isPrime, isPrime+35, true);
    iter(i,2,35,1)
    {
        if(isPrime[i])
        {
            iter(j,i*i,35,i)
                isPrime[j] = false;
        }
    }
}
void backtrack(int m)
{
    int i;
    if(m == n - 1 && isPrime[ring[m]+1])
    {
        printf("1");
        iter(i,1,n,1){ printf(" %d",ring[i]);}
        printf("\n");
        return;
    }
    iter(i,((m&1)?1:2),n+1,2)
    {
        if(!used[i] && isPrime[i+ring[m]])
        {
            used[i] = true;
            ring[m+1] = i;
            backtrack(m+1);
            used[i] = false;
        }
    }
}
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    popPrimes();
    int ct = 0;
    used[1] = true;
    while(si(n) == 1)
    {
        if(ct) printf("\n");
        printf("Case %d:\n",++ct);
        ring[0] = ring[n] = 1;
        backtrack(0);
    }
    return 0;
}
