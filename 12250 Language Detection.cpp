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
    char c[15];
    char* lang[6] = {"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    char* hola[6] = {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    int i = 0;
    bool found;
    while(gets(c))
    {
        i++;
        if(strcmp(c,"#") == 0) break;
        found = false;
        int j = 0;
        iter(j,0,6,1){if(strcmp(hola[j],c)==0){found = true; break;}}
        if(!found)
            printf("Case %d: UNKNOWN\n",i);
        else
            printf("Case %d: %s\n",i,lang[j]);
    }
    return 0;
}
