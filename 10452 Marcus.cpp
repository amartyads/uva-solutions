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
#include <sstream>
#include <string>
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
char moop[10][10];
vector<string> woop;
int n,m;
char noom[] = {'@','I','E','H','O','V','A','#'};
bool walk(int x, int y, int step)
{
    if(noom[step] == '#' && moop[y][x] == '#')
        return true;
    if(noom[step] != moop[y][x])
    {
        //cout << x << " " << y << " " << noom[step] << " " << moop[y][x] << endl;
        return false;
    }
    if(n-x > 1 && walk(x+1,y,step+1))
    {
        woop.push_back("right");
        return true;
    }
    if(y > 0 && walk(x,y-1,step+1))
    {
        woop.push_back("forth");
        return true;
    }
    if(x > 0 && walk(x-1,y,step+1))
    {
        woop.push_back("left");
        return true;
    }
    return false;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t; si(t);
    while(t--)
    {
        woop.clear();
        scanf("%d %d\n",&m,&n);
        int i;
        iter(i,0,m,1) gets(moop[i]);
        iter(i,0,n,1)
        {
            if(moop[m-1][i] == '@')
                break;
        }
        //cout << i;
        walk(i,m-1,0);
        for(auto it = woop.rbegin(); it != woop.rend(); ++it)
        {
            cout << *it;
            if(it+1 != woop.rend()) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
