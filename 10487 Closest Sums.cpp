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
    int n1,n2,i,j,k,ct,temp;
    vector<int> sums;
    ct = 0;
    while(true)
    {
        ct++;
        si(n1);
        if(!n1) break;
        int arr[n1];
        iter(i,0,n1,1) si(arr[i]);
        sums.clear();
        iter(i,0,n1-1,1){iter(j,i+1,n1,1){sums.push_back(arr[i]+arr[j]);}}
        sort(sums.begin(),sums.end());
        printf("Case %d:\n",ct);
        si(n2);
        iter(i,0,n2,1)
        {
            si(temp);
//            int mindif=2147483647,ans;
//            iter(j,0,sz,1)
//            {
//                if(abs(sums[j]-temp) < mindif)
//                {
//                    mindif = abs(sums[j]-temp);
//                    ans = sums[j];
//                }
//            }
            auto loc = lower_bound(sums.begin(),sums.end(),temp);
            int ans;
            if(*loc == temp || loc == sums.begin())
                ans = *loc;
            else
            {
                auto loc2 = loc-1;
                ans = abs(*loc-temp)<abs(*loc2-temp)?*loc:*loc2;
            }
            printf("Closest sum to %d is %d.\n",temp,ans);
        }
    }
    return 0;
}
