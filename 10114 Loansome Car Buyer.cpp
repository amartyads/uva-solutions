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
    int months, tcase;
    float payM,carVal,carValStr;
    float depr[101];
    int i = 0;
    while(true)
    {
        si(months);sf(payM);sf(carVal);si(tcase);
        carValStr = carVal;
        //cout << carVal << endl;
        if(months < 0) break;
        int lol[tcase+1];
        float dep[tcase+1];
        iter(i,0,tcase,1){si(lol[i]);sf(dep[i]);}
        int ct = 0;
        //cout << carVal << endl;
        iter(i,0,101,1)
        {
            if(i == lol[ct+1])
            {
                ct++;
            }
            depr[i] = dep[ct];
            //cout << carVal << " " << i << endl;
            //cout << depr[i] << " " << i <<endl;
        }
        i = 0;
        carVal += payM;
        payM = carValStr / months;
        carVal -= (depr[0] * carVal);
        while(carVal < carValStr)
        {
            i++;
            carVal -= (depr[i] * carVal);
            carValStr -= payM;
            //cout << carVal << " " << carValStr << endl;
        }
        printf("%d mont%s\n",i,i==1?"h":"hs");
    }
    return 0;
}
