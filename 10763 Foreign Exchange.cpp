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
    ll n;
    map<ll, multiset<ll> > locs;
    while(sll(n) == 1 && n)
    {
        ll i,a,b;
        locs.clear();
        ll elems = 0;
        iter(i,0,n,1)
        {
            sll(a);sll(b);
            if(!locs[b].empty() && locs[b].find(a) != locs[b].end())
            {
                auto it = locs[b].find(a);
                locs[b].erase(it);
                elems--;
            }
            else
            {
                locs[a].insert(b);
                elems++;
            }
        }
        if(!elems) puts("YES");
        else puts("NO");
    }
    return 0;
}
