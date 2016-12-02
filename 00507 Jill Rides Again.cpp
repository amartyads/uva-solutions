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
#include <set>
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
    int n; si(n);int x = 0;
    vector<int> arr;
    while(n--)
    {
        arr.clear();
        int l; si(l);
        --l;
        int i,temp;
        iter(i,0,l,1){si(temp);arr.push_back(temp);}
        int strt = -2, nd = -1,stt = -1, ans = 0, sum = 0;
        iter(i,0,l,1)
        {
            sum += arr[i];
            if((ans < sum) || (ans <= sum && (i-stt)>(nd-strt)))
            {
                ans = sum;
                strt = stt;
                nd = i;
            }
            if(sum < 0)
            {
                sum = 0;
                stt = i;
            }
        }
        if(strt == -2) printf("Route %d has no nice parts\n",++x);
        else printf("The nicest part of route %d is between stops %d and %d\n",++x,strt+2,nd+2);
    }
    return 0;
}
