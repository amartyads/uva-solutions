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
    int n;
    while(si(n)&&n)
    {
        string dirx = "+x";
        int i;
        iter(i,0,n-1,1)
        {
            string temp;
            cin >> temp;
            if(temp == "No")
            {
                ;
            }
            else if(temp == "+z")
            {
                if(dirx == "+x") dirx = "+z";
                else if(dirx == "-x") dirx = "-z";
                else if(dirx == "+z") dirx = "-x";
                else if(dirx == "-z") dirx = "+x";
            }
            else if(temp == "-z")
            {
                if(dirx == "+x") dirx = "-z";
                else if(dirx == "-x") dirx = "+z";
                else if(dirx == "+z") dirx = "+x";
                else if(dirx == "-z") dirx = "-x";
            }
            else if(temp == "+y")
            {
                if(dirx == "+x") dirx = "+y";
                else if(dirx == "-x") dirx = "-y";
                else if(dirx == "+y") dirx = "-x";
                else if(dirx == "-y") dirx = "+x";
            }
            else //temp == "-y
            {
                if(dirx == "+x") dirx = "-y";
                else if(dirx == "-x") dirx = "+y";
                else if(dirx == "+y") dirx = "+x";
                else if(dirx == "-y") dirx = "-x";
            }
        }
        cout << dirx <<endl;
    }
    return 0;
}
