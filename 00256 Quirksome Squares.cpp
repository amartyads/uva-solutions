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
    char two[] = "00\n01\n81";
    char four[] = "0000\n0001\n2025\n3025\n9801";
    char six[]= "000000\n000001\n088209\n494209\n998001";
    char eight[]= "00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001";
    int n;
    while(si(n) == 1)
    {
        switch(n)
        {
        case 2:
            puts(two);
            break;
        case 4:
            puts(four);
            break;
        case 6:
            puts(six);
            break;
        case 8:
            puts(eight);
            break;
        }
    }
    return 0;
}
