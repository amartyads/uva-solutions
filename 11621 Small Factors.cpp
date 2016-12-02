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
    vector<ll> nums;
    int i,j;
    iter(i,0,33,1){nums.push_back((ll)1<<i);}
    iter(j,0,21,1)
    {
        iter(i,j*33,j*33+33,1)
        {
            nums.push_back(nums[i] * 3);
        }
    }
    sort(nums.begin(),nums.end());
    ll inp;
    while(sll(inp) == 1 && inp)
    {
        printf("%lld\n",*lower_bound(nums.begin(),nums.end(),inp));
    }
    return 0;
}
