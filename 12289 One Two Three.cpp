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
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int i = 0; i < n; i++) a[i] = x
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d",&a)
#define sli(a) scanf("%I32d",&a)
#define sll(a) scanf("%I64d",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int tc; si(tc);getchar();
    char c[10];
    int i,j,ct1,ct2,ct3;
    char o[] = "one";
    char t[] = "two";
    char h[] = "three";
    while(tc--)
    {
        ct1 = ct2 = ct3 = 0;
        gets(c);
        iter(i,0,3,1) if(o[i]!=c[i]) ct1++;
        iter(i,0,3,1) if(t[i]!=c[i]) ct2++;
        iter(i,0,5,1) if(h[i]!=c[i]) ct3++;
        if(ct1 <= 1) printf("1\n");
        else if(ct2 <= 1) printf("2\n");
        else if(ct3 <= 1) printf("3\n");
    }
    return 0;
}
