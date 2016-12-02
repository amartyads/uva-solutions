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
class UFD
{
private:
    vector<int> ran, p;
public:
    UFD(int n){ran.assign(n,0);p.assign(n,0);for(int i = 0; i < n; i++) p[i] = i;}
    int findset(int i){return ((p[i] == i)?i:(p[i] = findset(p[i])));}
    bool issameset(int i, int j){return(findset(i) == findset(j));}
    void unionset(int i,int j)
    {
        if(!issameset(i,j))
        {
            int x = findset(i),y = findset(j);
            if(ran[x] > ran[y]) p[y] = x;
            else
            {
                p[x] = y;
                if(ran[x] == ran[y]) ran[y]++;
            }
        }
    }
};
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t;scanf("%d\n",&t);
    int n;
    char dummy,que[1000];
    int a,b;
    int suc,unsuc;
    bool first = true;
    while(t--)
    {
        if(!first) printf("\n");
        else first = false;
        suc = unsuc = 0;
        scanf("%d\n",&n);
        UFD ufd(n);
        while(gets(que) != NULL)
        {
            if(strcmp(que,"") == 0) break;
            sscanf(que,"%c %d %d",&dummy,&a,&b);
            if(dummy == 'c')
                ufd.unionset(a-1,b-1);
            else if(dummy == 'q')
            {
                if(ufd.issameset(a-1,b-1))
                {
                    //printf("suc for %d %d %d %d\n",a,b,suc,unsuc);
                    suc++;
                }
                else
                {
                    //printf("unsuc for %d %d %d %d\n",a,b,suc,unsuc);
                    unsuc++;
                }
            }
        }
        printf("%d,%d\n",suc,unsuc);
    }
    return 0;
}
