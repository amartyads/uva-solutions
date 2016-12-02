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
    int t; si(t);
    li b, sg, sb,i;
    int temp;
    bool first = true;
    multiset<int> green, blue;
    multiset<int>::iterator git,bit;
    vector<int> gb,bb;
    while(t--)
    {
        if(!first) printf("\n");
        else first = false;
        sli(b);sli(sg);sli(sb);
        green.clear();
        blue.clear();
        iter(i,0,sg,1)
        {
            si(temp);
            green.insert(temp);
        }
        iter(i,0,sb,1)
        {
            si(temp);
            blue.insert(temp);
        }
        while(!green.empty() && !blue.empty())
        {
            gb.clear();
            bb.clear();
            //li fights = min(b,(li)min(green.size(),blue.size()));
            iter(i,0,b,1)
            {
                if(green.empty() || blue.empty()) break;
                git = green.end();
                bit = blue.end();
                git--;
                bit--;
                gb.push_back(*git-*bit);
                bb.push_back(*bit-*git);
                green.erase(git);
                blue.erase(bit);
            }
            for(auto j : gb) if(j > 0) green.insert(j);
            for(auto j : bb) if(j > 0) blue.insert(j);
        }
        if(blue.empty() && green.empty())
        {
            puts("green and blue died");
        }
        else if(blue.empty())
        {
            puts("green wins");
            for(multiset<int>::reverse_iterator it = green.rbegin(); it != green.rend(); ++it)
                printf("%d\n",*it);
            //printf("\n");
        }
        else
        {
            puts("blue wins");
            for(multiset<int>::reverse_iterator it = blue.rbegin(); it != blue.rend(); ++it)
                printf("%d\n",*it);
            //printf("\n");
        }
    }
    return 0;
}
