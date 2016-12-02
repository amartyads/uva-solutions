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
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t; si(t);
    char dummy[10];
    char ln[100];
    gets(dummy);
    li mask;
    int ct;
    while(t--)
    {
        mask = 0;
        ct = 0;
        while(gets(ln) != NULL)
        {
            if(ln[0] == '*') break;
            mask |= (1 << (ln[1] - 'A'));
            mask |= (1 << (ln[3] - 'A'));
            ct++;
        }
        gets(ln);
        int num = (strlen(ln)+1)/2;
        int comp = num - ct;
        ct = 0;
        while(mask != ((1<<26)-1)) {mask = mask | (mask+1); ct++;}
        ct = num - (26 - ct);
        comp -= ct;
        printf("There are %d tree(s) and %d acorn(s).\n",comp,ct);
    }
    return 0;
}
