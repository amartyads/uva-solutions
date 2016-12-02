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
    int t; si(t);
    char lines[2010];
    int edgect[1010];
    vector < pair <int, int> > adjlist;
    vector<int> finlis;
    char dummy[2];
    while(t--)
    {
        int n;
        scanf("%d\n",&n);
        int i;
        adjlist.clear();
        iter(i,1,n+1,1)
        {
            gets(lines);
            char* ptr = lines;
            while(*ptr != '\0')
            {
                int temp = (int)strtol(ptr, &ptr, 10);
                adjlist.push_back(make_pair(i,temp));
            }
        }
        fill(edgect, edgect+n+1,0);
        edgect[0] = 10000;
        auto it = adjlist.begin();
        for(;it!= adjlist.end();++it)
        {
            //cout << it->first <<" "<<it->second<<endl;
            edgect[(*it).first]++;
        }
        int mini = 10001;
        iter(i,1,n+1,1)
        {
            //cout << i << " " << edgect[i] << endl;
            mini = min(mini,edgect[i]);
        }
        finlis.clear();
        iter(i,1,n+1,1)
        {
            if(edgect[i] == mini) finlis.push_back(i);
        }
        auto it2 = finlis.begin();
        printf("%d",*it2);
        ++it2;
        for(;it2 != finlis.end();++it2)
            printf(" %d",*it2);
        printf("\n");
        gets(dummy);
    }
    return 0;
}
