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
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
bool wayToSort(int i,int j){return i > j;}
int main()
{

    int t; si(t);
    int i = 0;
    puts("Lumberjacks:");
    while(t--)
    {
        int arr[10], arrcpy1[10], arrcpy2[10];
        iter(i,0,10,1){si(arr[i]); arrcpy1[i] = arr[i]; arrcpy2[i] = arr[i];}
        sort(arrcpy1,arrcpy1+10);
        sort(arrcpy2,arrcpy2+10,wayToSort);
        int in=0,de=0;
        iter(i,0,10,1){if(arr[i]==arrcpy1[i]) in++; if(arr[i]==arrcpy2[i]) de++;}
        if(in == 10 || de == 10)
            puts("Ordered");
        else
            puts("Unordered");
    }
    return 0;
}
