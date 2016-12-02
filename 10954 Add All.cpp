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
    li temp,ans;
    priority_queue<li, vector<li>, greater<li> > nums;
    while(si(n)!=EOF && n)
    {
        while(n--)
        {
            sli(temp);
            nums.push(temp);
        }
        ans = 0;
        while(nums.size() > 1)
        {
            temp = nums.top();
            nums.pop();
            temp += nums.top();
            nums.pop();
            ans += temp;
            nums.push(temp);
        }
        printf("%ld\n",ans);
        nums.pop();
    }
    return 0;
}
