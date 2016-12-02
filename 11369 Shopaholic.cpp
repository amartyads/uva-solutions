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
    vector<int> arr;
    int t;si(t);
    while(t--)
    {
        arr.clear();
        int n; si(n);
        int temp,i;
        iter(i,0,n,1)
        {
            si(temp);
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        //iter(i,0,n,1) cout << arr[i] << " ";
        ll disc = 0;
        iter(i,2,n,3)
            disc+=arr[i];
        printf("%lld\n",disc);
    }
    return 0;
}
