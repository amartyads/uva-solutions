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
    int t;cin >> t;
    int d,i;
    string names[10001];
    ll low[10001], high[10001];
    string ans;
    int q;
    ll p;
    while(t--)
    {
        cin >> d;
        ans = "UNDETERMINED";
        iter(i,0,d,1){cin >> names[i] >> low[i] >> high[i];}
        bool found = false;
        cin >> q;
        while(q--)
        {
            cin >> p;
            ans = "UNDETERMINED";
            found = false;
            iter(i,0,d,1)
            {
                if(p >= low[i] && p <= high[i])
                {
                    if(!found)
                    {
                        found = true;
                        ans = names[i];
                    }
                    else
                    {
                        ans = "UNDETERMINED";
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
        cout << (t == 0 ?"":"\n");
    }
    return 0;
}
