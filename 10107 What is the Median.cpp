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
#include <limits>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int zyzzy = 0; zyzzy < n; zyzzy++) a[zyzzy] = x
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
    ll temp,i = 0,t1,t2;
    while(sll(temp)!=EOF)
    {
        nums.push_back(temp);
        i++;
        if(i%2)//odd
        {
            nth_element(nums.begin(),nums.begin()+(nums.size()/2),nums.end());
            printf("%lld\n",nums[nums.size()/2]);
        }
        else
        {
            nth_element(nums.begin(),nums.begin()+(nums.size()/2),nums.end());
            t1 = nums[nums.size()/2];
            nth_element(nums.begin(),nums.begin()+(nums.size()/2)-1,nums.end());
            t2 = nums[nums.size()/2-1];
            printf("%lld\n",(t1+t2)/2);
        }
    }
    return 0;
}
