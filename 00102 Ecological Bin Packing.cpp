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
    int arr[9],i;
    map<string,int> vals;
    while(si(arr[0]) == 1)
    {
        iter(i,1,9,1) si(arr[i]);//b g c
        vals["GCB"] = arr[0]+arr[2]+arr[3]+arr[4]+arr[7]+arr[8];
        vals["GBC"] = arr[0]+arr[2]+arr[4]+arr[5]+arr[6]+arr[7];
        vals["CGB"] = arr[0]+arr[1]+arr[3]+arr[5]+arr[7]+arr[8];
        vals["CBG"] = arr[0]+arr[1]+arr[4]+arr[5]+arr[6]+arr[8];
        vals["BGC"] = arr[1]+arr[2]+arr[3]+arr[5]+arr[6]+arr[7];
        vals["BCG"] = arr[1]+arr[2]+arr[3]+arr[4]+arr[6]+arr[8];
        int minval = vals["GCB"];
        string mx = "GCB";
        for(auto it = vals.rbegin();it != vals.rend();++it)
        {
            if(minval >= it->second)
            {
                minval = it->second;
                mx = it->first;
            }
        }
        cout << mx << " " << minval << endl;
    }
    return 0;
}
