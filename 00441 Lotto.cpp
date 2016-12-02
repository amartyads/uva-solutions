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
    int s,temp;
    vector<int> nums;
    int i,j,k,l,m,n;
    bool first = true;
    while(si(s)!=EOF && s)
    {
        nums.clear();
        iter(i,0,s,1){si(temp);nums.push_back(temp);}
        if(first) first = false;
        else printf("\n");
        iter(i,0,s,1) iter(j,i+1,s,1) iter(k,j+1,s,1) iter(l,k+1,s,1) iter(m,l+1,s,1) iter(n,m+1,s,1) printf("%d %d %d %d %d %d\n",nums[i],nums[j],nums[k],nums[l],nums[m],nums[n]);
    }
    return 0;
}
