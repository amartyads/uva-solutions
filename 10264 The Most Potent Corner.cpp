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
    int dim,i,j;
    int vals[(1<<15) + 10], ans[(1<<15) + 10];
    set<int> sums;
    while(si(dim)==1)
    {
        int corn = 1 << dim;
        iter(i,0,corn,1)
        {
            si(vals[i]);
            //ans[i] = vals[i];
        }
        int murk;
        fill(ans,ans+corn,0);
        iter(i,0,corn,1)
        {
            iter(j,0,dim,1)
            {
                murk = i ^ (1 << j);
                ans[i] += vals[murk];
            }
        }
        iter(i,0,corn,1)
        {
            iter(j,0,dim,1)
            {
                murk = i ^ (1 << j);
                sums.insert(ans[i]+ans[murk]);
            }
        }
        //sort(ans,ans+corn,greater<int>());
        printf("%d\n",*(sums.rbegin()));
        sums.clear();
    }
    return 0;
}
