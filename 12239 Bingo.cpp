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
    int n,b,i,j;
    int arr[100];
    bool has[100];
    while(scanf("%d %d",&n,&b),(n|b))
    {
        fill(has,has+n+1,true);
        iter(i,0,b,1)
        {
            si(arr[i]);
            has[arr[i]] = false;
        }
        iter(i,0,b-1,1) iter(j,i+1,b,1)
        {
            has[abs(arr[i]-arr[j])] = false;
        }
        int tot = accumulate(has,has+n+1,0);
        if(!tot) puts("Y");
        else puts("N");
    }
    return 0;
}
