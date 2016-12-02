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
private: vector<li> p, rank, noElem;; // remember: vi is vector<int>
public:
    UnionFind(li N)
    {
        rank.assign(N, 0);
        p.assign(N, 0);
        noElem.assign(N,1);
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

        }
    }
};
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    map<string,li> names;
    int t; si(t);
    while(t--)
    {
        li f;
        scanf("%ld\n",&f);
        UnionFind uf(100000);
        names.clear();
        string s1,s2;
        li cur = 1;
        while(f--)
        {
            cin >> s1 >> s2;
            if(!names[s1]) names[s1] = cur++;
            if(!names[s2]) names[s2] = cur++;
            uf.unionSet(names[s1],names[s2]);
            cout << uf.getElem(names[s1]) << endl;
        }
    }
    return 0;
}
