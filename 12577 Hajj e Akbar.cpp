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
    char* one[] = {"Hajj","Umrah"};
    char* two[] = {"Hajj-e-Akbar","Hajj-e-Asghar"};
    char c[10];
    int i = 1;
    while(true)
    {
        gets(c);
        if(!strcmp(c,"*")) break;
        printf("Case %d: ",i++);
        if(!strcmp(c,one[0])) puts(two[0]);
        if(!strcmp(c,one[1])) puts(two[1]);
    }
    return 0;
}
