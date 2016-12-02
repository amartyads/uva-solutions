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
vector<ll> sieve;
bitset<1000010> bs;
void populate()
{
    bs.set();
    bs[0] = bs[1] = 0;
    ll i,j;
    iter(i,2,1000010,1)
    {
        if(bs[i])
        {
            sieve.push_back(i);
            iter(j,i*i,1000010,i)
                bs[j] = 0;
        }
    }
}
int main()
{
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    populate();
    sieve.erase(sieve.begin());
//    cout << "{";
//    for(auto it = sieve.begin(); it != sieve.end(); ++it)
//        cout << *it << ",";
    ll n;
    while(sll(n),n)
    {
        auto x = lower_bound(sieve.begin(),sieve.end(),n);
        while(x != sieve.begin())
        {
            //if(binary_search(sieve.begin(),x,n-(*x))) break;
            x--;
            if(bs[n-(*x)]) break;
        }
        printf("%lld = %lld + %lld\n",n,n-(*x),*x);
    }
    return 0;
}
