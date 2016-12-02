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
    int ppl,noH,noW;
    li budget;
    while(si(ppl)!=EOF)
    {
        sli(budget); si(noH); si(noW);
        int i,j;
        li mini = budget + 1;
        iter(i,0,noH,1)
        {
            int pr; si(pr);
            iter(j,0,noW,1)
            {
                int temp; si(temp);
                if(temp >= ppl && mini > ppl * pr)
                {
                    //cout << temp << " " << ppl << " ";
                    mini = ppl * pr;
                }
            }
        }
        if(mini > budget)
            printf("stay home\n");
        else
            printf("%d\n",mini);
    }
    return 0;
}
