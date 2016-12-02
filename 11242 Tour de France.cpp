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
    int f,r,i,j,k;
    while(si(f)!=EOF && f)
    {
        si(r);
        k = 0;
        int fs[f];
        iter(i,0,f,1) si(fs[i]);
        int rs[r];
        iter(i,0,r,1) si(rs[i]);
        int sz = f*r;
        double drives[sz];
        iter(i,0,f,1) iter (j,0,r,1) {drives[k++] = (double)rs[j]/fs[i];}//cout << drives[k] << endl;k++;
        sort(drives,drives+sz);
        k = 0;
        double maxspr = -1;
        iter(i,0,sz-1,1){maxspr = max(maxspr,drives[i+1]/drives[i]);}
        printf("%0.2f\n",maxspr);
    }
    return 0;
}
