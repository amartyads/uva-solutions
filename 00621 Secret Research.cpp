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
#define sli(a) scanf("%ld",&a)
#define sll(a) scanf("%lld",&a)
#define slu(a) scanf("%llu",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int n; si(n);getchar();
    char c[1001];
    while(n--)
    {
        gets(c);
        int len = strlen(c);
        if((strcmp(c,"1")==0||strcmp(c,"4")==0||strcmp(c,"78")==0)) puts("+");
        else if(c[len-2]=='3'&&c[len-1]=='5') puts("-");
        else if(c[0]=='9'&&c[len-1]=='4') puts("*");
        else puts("?");
    }
    return 0;
}
