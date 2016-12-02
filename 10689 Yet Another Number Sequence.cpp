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
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int fibs[15005];
    fibs[0] = 0;
    fibs[1] = 1;
    int i;
    iter(i,2,15005,1) fibs[i] = (fibs[i-1]%10000 + fibs[i-2]%10000) % 10000;
    int t;
    si(t);
    ll a,b;
    int m,ans;
    ll n;
    while(t--)
    {
        sll(a);sll(b);sll(n);si(m);
        int p = ceil(pow(10,m));
        if(n%15000 == 0) ans = a%p;
        else ans = (((fibs[n%15000]*b)%p + (fibs[(n-1)%15000]*a)%p)) % p;
        printf("%d\n",ans);
    }
    return 0;
}
