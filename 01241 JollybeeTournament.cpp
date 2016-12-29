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
    int t;si(t);
    bitset<1030> orig,next;
    while(t--)
    {
        int m,n,i,temp;
        si(n);si(m);
        orig.set();
        iter(i,0,m,1){ si(temp); orig[temp-1] = 0;}
        int ct = 0;
        int uplim = 1 << n;
        while(uplim > 1)
        {
            //cout << orig << endl;
            iter(i,0,uplim,2)
            {
                if(orig[i] ^ orig[i+1] == 1)
                {
                    //cout << orig << " " << i <<  " " << i+1 << endl;
                    ct++;
                }
                next[i/2] = orig[i] | orig[i+1];
            }
            orig = next;
            uplim /= 2;
        }
        printf("%d\n",ct);
    }
    return 0;
}
