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
    while(true)
    {
        int k;si(k);
        if(!k) break;
        int inx,iny;si(inx);si(iny);
        while(k--)
        {
            int x,y;si(x);si(y);
            x -= inx; y -= iny;
            if(x==0 || y ==0)
                printf("divisa\n");
            else if(x > 0 && y > 0)
                printf("NE\n");
            else if(x > 0 && y < 0)
                printf("SE\n");
            else if(x < 0 && y > 0)
                printf("NO\n");
            else
                printf("SO\n");
        }
    }
    return 0;
}
