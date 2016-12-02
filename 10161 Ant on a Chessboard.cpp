
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
    ll n,one,two;
    while(sll(n),n)
    {
        float x = sqrt(n);
        ll u = ceil(x);
        ll l = floor(x);
        if(u == l)
        {
            if(l&1)
            {
                one = 1;
                two = l;
            }
            else
            {
                one = l;
                two = 1;
            }
        }
        else
        {
            ll mid = ((l*l+1) + u*u)/2;
            one = two = u;
            if(n > mid)
            {
                two -= (n - mid);
            }
            else
            {
                one -= (mid - n);
            }
            if(!(l&1))
            {
                ll temp = one;
                one = two;
                two = temp;
            }
        }
        printf("%lld %lld\n",one,two);
    }
    return 0;
}
