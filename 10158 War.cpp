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
class UnionFind
{
private: vector<li> p, rank, noElem; // remember: vi is vector<int>
    li noSets;
public:
    UnionFind(li N)
    {
        rank.assign(N, 0);
        p.assign(N, 0);
        noElem.assign(N,1);
        noSets = N;
        for (li i = 0; i < N; i++) p[i] = i;
    }
    li findSet(li i) {return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(li i, li j) {li n1 = findSet(i);li n2 = findSet(j);return n1 == n2;}
    li getElem(li i){return noElem[findSet(i)];}
    void unionSet(li i, li j)
    {
        if (!isSameSet(i, j))
        { // if from different set
            li x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y])
            {
                p[y] = x;
                noElem[x]+=noElem[y];
            }
            else
            {
                p[x] = y;
                noElem[y]+=noElem[x];
                if (rank[x] == rank[y]) rank[y]++;
            }
            noSets--;
        }
    }
    li getLargestSet()
    {
        li toRet = 0;
        auto it = noElem.begin();
        for(;it!=noElem.end(); ++it)
            toRet = max(toRet,*it);
        return toRet;
    }
    li getNoSets(){return noSets;}
};
UnionFind ufd(20000);
int areFriends(li a, li b)
{
    return ufd.findSet(a) == ufd.findSet(b);
}
int areEnemies(li a, li b)
{
    return ufd.findSet(a) == ufd.findSet(10000+b);
}
int setFriends(li a, li b)
{
    if(areFriends(a,b)) return 1;
    if(areEnemies(a,b)) return 0;
    ufd.unionSet(a,b);
    ufd.unionSet(10000+a,10000+b);
    return 1;
}
int setEnemies(li a, li b)
{
    if(areFriends(a,b)) return 0;
    if(areEnemies(a,b)) return 1;
    ufd.unionSet(a,10000+b);
    ufd.unionSet(10000+a,b);
    return 1;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    li n; sli(n);
    li a,b,c;
    while(scanf("%ld %ld %ld",&a,&b,&c) && (a|b|c))
    {
        switch(a)
        {
        case 1:
            if(!setFriends(b,c)) printf("-1\n");
            break;
        case 2:
            if(!setEnemies(b,c)) printf("-1\n");
            break;
        case 3:
            printf("%d\n",areFriends(b,c));
            break;
        case 4:
            printf("%d\n",areEnemies(b,c));
            break;
        default:
            break;
        }
    }
    return 0;
}
