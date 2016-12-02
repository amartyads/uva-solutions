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
    ll n; sll(n);
    ll arr[n];
    ll i;
    iter(i,0,n,1) sll(arr[i]);
    ll q; sll(q);
    iter(i,0,q,1)
    {
        ll temp; sll(temp);
        auto it1 = lower_bound(arr,arr+n,temp);
        auto it2 = upper_bound(arr,arr+n,temp);
        while(*it1 >= temp) --it1;
        if(arr[0] > temp) printf("X");
        else printf("%lld",(it1 == arr+n?arr[n-1] : *it1));
        if(arr[n-1] < temp) printf(" X\n");
        else printf(" %lld\n",*it2);
    }
    return 0;
}
