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
    int n; si(n);
    int arr[200][200];
    while(n--)
    {
        int b; si(b);
        int i,j,k,l;
        iter(i,0,b,1) iter(j,0,b,1)
        {
            si(arr[i][j]);
            arr[i+b][j+b] = arr[i+b][j] = arr[i][j+b] = arr[i][j];
        }
        iter(i,0,b+b,1)
        {
            iter(j,0,b+b,1)
            {
                if(i > 0) arr[i][j] += arr[i-1][j];
                if(j > 0) arr[i][j] += arr[i][j-1];
                if(i > 0 && j > 0) arr[i][j] -= arr[i-1][j-1];
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }
        int ans = 0, maxS = -1e7;
        iter(i,0,b,1) iter(j,0,b,1)
        iter(k,i,i+b,1) iter(l,j,j+b,1)
        {
            ans = arr[k][l];
            if(i > 0) ans -= arr[i-1][l];
            if(j > 0) ans -= arr[k][j-1];
            if(i > 0 && j > 0) ans += arr[i-1][j-1];
            maxS = max(maxS,ans);
        }
        printf("%d\n",maxS);
    }
    return 0;
}
