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
class Regis
{
    public:
    int regno;
    public:
    int initP;
    public:
    int curP;
    public:
    Regis(int t, int i, int c)
    {
        regno = t;
        initP = i;
        curP = c;
    }
};
class comparator
{
public:
    bool operator() (const Regis &r1, const Regis &r2) const
    {
        if(r1.curP == r2.curP) return(r1.regno > r2.regno);
        else return(r1.curP > r2.curP);
    }
};
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    char reg[10];
    int id,period;
    priority_queue<Regis, vector<Regis>, comparator> argusT;
    while(true)
    {
        scanf("%s",reg);
        if(strcmp(reg,"#") == 0) break;
        scanf("%d %d",&id,&period);
        argusT.push(Regis(id,period,period));
    }
    int tot;
    si(tot);
    int i;
    iter(i,0,tot,1)
    {
        Regis tem = argusT.top();
        argusT.pop();
        printf("%d\n",tem.regno);
        tem.curP += tem.initP;
        argusT.push(tem);
    }
    return 0;
}
