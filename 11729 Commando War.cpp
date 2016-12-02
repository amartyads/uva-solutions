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
bool psort(pair<li, li> a, pair<li,li> b){return (a.second > b.second);}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    li n;
    vector<pair<li,li> > tell;
    li x = 0;
    while(sli(n)==1 && n)
    {
        tell.clear();
        x++;
        li i,t1,t2;
        iter(i,0,n,1)
        {
            sli(t1);sli(t2);
            tell.push_back(make_pair(t1,t2));
        }
        sort(tell.begin(),tell.end(),psort);
        li rem = 0,sum = 0;
        iter(i,0,n,1)
        {
            sum += tell[i].first;
            rem -= tell[i].first;
            rem = max(rem,tell[i].second);
        }
        sum += rem;
        printf("Case %ld: %ld\n",x,sum);
    }
    return 0;
}
