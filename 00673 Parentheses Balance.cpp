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
    int n; si(n); cin.ignore();
    stack<char> lel;
    string s;
    while(n--)
    {
        getline(cin,s);
        while(!lel.empty()) lel.pop();
        for(auto it = s.begin(); it != s.end(); ++it)
        {
            if(lel.empty())
                lel.push(*it);
            else if((lel.top() == '(' && *it == ')') || (lel.top() == '[' && *it == ']'))
                lel.pop();
            else
                lel.push(*it);
        }
        if(lel.empty())
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
