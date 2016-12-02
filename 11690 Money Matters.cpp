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
private: vector<li> p, rank, noElem,content; // remember: vi is vector<int>
    li noSets;
public:
    UnionFind(li N)
    {
        rank.assign(N, 0);
        p.assign(N, 0);
        noElem.assign(N,1);
        content.assign(N,0);
        noSets = N;
        for (li i = 0; i < N; i++) p[i] = i;
    }
    li findSet(li i) {return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(li i, li j) {li n1 = findSet(i);li n2 = findSet(j);return n1 == n2;}
    void setContent(li i, li num){content[i] = num;}
    li getElem(li i){return noElem[findSet(i)];}
    li getContent(li i){return content[findSet(i)];}
    void unionSet(li i, li j)
    {
        if (!isSameSet(i, j))
        { // if from different set
            li x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y])
            {
                p[y] = x;
                noElem[x]+=noElem[y];
                content[x]+=content[y];
            }
            else
            {
                p[x] = y;
                noElem[y]+=noElem[x];
                content[y]+=content[x];
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
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t; si(t);
    //vector<li> content;
    while(t--)
    {
        li n,m;
        sli(n);sli(m);
        UnionFind ufd(n);
        //content.clear();
        li i;
        li a,b;
        iter(i,0,n,1)
        {
            sli(a);
            ufd.setContent(i,a);
        }
        iter(i,0,m,1)
        {
            sli(a);sli(b);
            ufd.unionSet(a,b);
        }
        bool can = true;
        iter(i,0,n,1)
        {
            if(ufd.getContent(i)) can = false;
        }
        if(can) puts("POSSIBLE");
        else puts("IMPOSSIBLE");
    }
    return 0;
}
