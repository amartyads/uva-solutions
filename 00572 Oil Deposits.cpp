#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <numeric>
#include <stack>
#include <array>
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
    int m,n;
    int curColour;
    string inp;
    array<array<char,103>,103> field;
    array<array<int,103>,103> colour;
    queue<pair<int,int>> traverseHelper;
    int x,y;
    while(scanf("%d %d\n",&m,&n) && (m|n))
    {
        for(int i=0; i<m+2; i++)
        {
            fill_n(field[i].begin(),n+2,'*');
            fill_n(colour[i].begin(), n+2, 0);
        }
        curColour = 1;
        for(int i=0; i<m; i++)
        {
            getline(cin,inp);
            for(int j=1;j<n+1;j++)
            {
                field[i+1][j] = inp[j-1];
            }
        }
        // for(int i=0; i<m+2;i++)
        // {
        //     for(int j=0; j<n+2; j++)
        //     {
        //         cout << field[i][j];
        //     }
        //     cout << endl;
        // }
        for(int i=1; i<m+1; i++)
        {
            for(int j=1; j<n+1;j++)
            {
                if(field[i][j] == '@' && colour[i][j] == 0)
                {
                    traverseHelper = {};
                    traverseHelper.push(make_pair(i,j));
                    colour[i][j] = curColour;
                    while(!traverseHelper.empty())
                    {
                        tie(x,y) = traverseHelper.front();
                        traverseHelper.pop();
                        if(field[x-1][y-1] == '@' && colour[x-1][y-1] == 0){colour[x-1][y-1] = curColour; traverseHelper.push(make_pair(x-1,y-1));}
                        if(field[x-1][y] == '@' && colour[x-1][y] == 0) {colour[x-1][y] = curColour; traverseHelper.push(make_pair(x-1,y));}
                        if(field[x-1][y+1] == '@' && colour[x-1][y+1] == 0) {colour[x-1][y+1] = curColour; traverseHelper.push(make_pair(x-1,y+1));}
                        if(field[x][y-1] == '@' && colour[x][y-1] == 0) {colour[x][y-1] = curColour; traverseHelper.push(make_pair(x,y-1));}
                        if(field[x][y+1] == '@' && colour[x][y+1] == 0) {colour[x][y+1] = curColour; traverseHelper.push(make_pair(x,y+1));}
                        if(field[x+1][y-1] == '@' && colour[x+1][y-1] == 0) {colour[x+1][y-1] = curColour; traverseHelper.push(make_pair(x+1,y-1));}
                        if(field[x+1][y] == '@' && colour[x+1][y] == 0) {colour[x+1][y] = curColour; traverseHelper.push(make_pair(x+1,y));}
                        if(field[x+1][y+1] == '@' && colour[x+1][y+1] == 0) {colour[x+1][y+1] = curColour; traverseHelper.push(make_pair(x+1,y+1));}
                    }
                    curColour++;
                }
            }
        }
        // for(int i=0; i<m+2;i++)
        // {
        //     for(int j=0; j<n+2; j++)
        //     {
        //         cout << colour[i][j];
        //     }
        //     cout << endl;
        // }
        printf("%d\n",curColour-1);
    }
    return 0;
}
