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
#include <array>
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
    array<short, 110> sum;
    fill(sum.begin(), sum.end(),0);
    short num;
    int numLoc;
    string s;
    while(getline(cin,s))
    {
        if(s == "0")
            break;
        numLoc = 0;
        for(auto it=s.rbegin();it!=s.rend();++it)
        {
            num=*it-'0';
            sum[numLoc] += num;
            sum[numLoc+1] += sum[numLoc]/10;
            sum[numLoc] %= 10;
            numLoc++;
        }
    }
    bool leadZeroes=true;
    for(auto it=sum.rbegin();it!=sum.rend();++it)
    {
        if(*it!= 0)
            leadZeroes = false;
        if(!leadZeroes)
            printf("%hd",*it);
    }
    printf("\n");
    return 0;
}
