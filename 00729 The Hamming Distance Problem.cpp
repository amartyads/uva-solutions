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
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t;
    si(t);
    int arr[18];
    while(t--)
    {
        int n,w;
        si(n); si(w);
        int i;
        fill(arr,arr+n,0);
        fill(arr,arr+w,1);
        sort(arr,arr+n);
        do
        {
            iter(i,0,n,1) printf("%d",arr[i]);
            printf("\n");
        }while(next_permutation(arr,arr+n));
        if(t > 0) printf("\n");
    }
    return 0;
}
