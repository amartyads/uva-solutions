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
    while(true)
    {
        int n;si(n);
        if(!n) break;
        int c;si(c);
        int csc[n];
        int i,j;
        iter(i,0,n,1)
            si(csc[i]);
        bool okay = true;
        iter(i,0,c,1)
        {
            int num; si(num);
            int preq; si(preq);
            iter(j,0,num,1)
            {
                int temp; si(temp);
                if(find(csc,csc+n,temp)!=csc+n)
                    preq--;
            }
            if(preq > 0)
                okay = false;
        }
        if(okay)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}
