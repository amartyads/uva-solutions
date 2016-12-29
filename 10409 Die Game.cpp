#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <numeric>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <sstream>
#include <string>
#include <regex>
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
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int x,i,dx;
    string inp;
    while(cin >> x ,x)
    {
        int t = 1, n = 2, s = 5, w = 3, e = 4, b = 6, temp;
        iter(i,0,x,1)
        {
            cin >> inp;
            temp = t;
            if(inp == "north")
            {
                t = s;
                s = b;
                b = n;
                n = temp;
            }
            else if(inp == "south")
            {
                t = n;
                n = b;
                b = s;
                s = temp;
            }
            else if(inp == "west")
            {
                t = e;
                e = b;
                b = w;
                w = temp;
            }
            else
            {
                t = w;
                w = b;
                b = e;
                e = temp;
            }
        }
        cout << t << endl;
    }
    return 0;
}
