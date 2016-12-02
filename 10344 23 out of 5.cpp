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
int nums[5];
bool gotEm(int i, long n)
{
    if(i == 5)
    {
        if(n == 23)
            return true;
        else
            return false;
    }
    return (gotEm(i+1,n + nums[i]) || gotEm(i+1,n - nums[i]) || gotEm(i+1, n * nums[i]));
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    while(scanf("%d %d %d %d %d",&nums[0],&nums[1],&nums[2],&nums[3],&nums[4]) == 5 && (nums[0]||nums[1]||nums[2]||nums[3]||nums[4]))
    {
        sort(nums,nums+5);
        bool found = false;
        do
        {
            if(gotEm(1,nums[0]))
            {
                found = true;
                break;
            }
        }while(next_permutation(nums,nums+5));
        if(found) puts("Possible");
        else puts("Impossible");
    }
    return 0;
}
