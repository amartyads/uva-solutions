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
    li a,b;
    //char seq[1000001];
    while(scanf("%ld %ld",&a,&b) && (a!= 1 || b != 1))
    {
        li lnum = 0, lden = 1, hnum = 1, hden = 0;
        li mnum,mden;
        //li ind = 0;
        string op = "";
        while(true)
        {
            mnum = lnum + hnum;
            mden = lden + hden;
            if(mnum == a && mden == b)
                break;
            else if(mnum*b < a*mden)
            {
                lnum = mnum; lden = mden;
                //seq[ind++] = 'R';
                op.append(1,'R');
                //cout << 'R';
            }
            else
            {
                hnum = mnum; hden = mden;
                //seq[ind++] = 'L';
                op.append(1,'L');
                //cout << 'L';
            }
        }
        //seq[ind] = '\0';
        //puts(seq);
        cout << op << endl;
        //cout << endl;
    }
    return 0;
}
