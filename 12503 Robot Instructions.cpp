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
int main()
{
    int t; si(t);
    while(t--)
    {
        int n; si(n);
        getchar();
        int arr[n];
        int i;
        char c[10];
        iter(i,0,n,1)
        {
            gets(c);
            if(strcmp(c,"LEFT")==0)arr[i] = -1;
            else if(strcmp(c,"RIGHT")==0)arr[i] = 1;
            else
            {
                int num = 0;
                int j = 0;
                iter(j,8,strlen(c),1)
                {
                    num *= 10;
                    num += c[j]-'0';
                }
                arr[i] = arr[num-1];
            }
        }
        int pos = 0;
        iter(i,0,n,1)
            pos += arr[i];
        printf("%d\n",pos);
    }
    return 0;
}
