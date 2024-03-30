#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <array>
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
#define MAXSIZE 200
int main()
{
    //freopen("1in.txt", "r", stdin);
    //freopen("1out.txt", "w", stdout);
    array<array<int,MAXSIZE>, MAXSIZE> adjGraph;
    array<int,MAXSIZE> colour;
    queue<int> bfs;
    int v,e,a,b,curColour,curNode;
    bool possible = true;
    while(si(v) && v)
    {
        possible = true;
        curColour = 0;
        fill_n(colour.begin(),v,2);
        for(int i = 0; i < v; i++)
            fill_n(adjGraph[i].begin(),v,0);
        bfs = {};
        si(e);
        while(e--)
        {
            si(a);si(b);
            adjGraph[a][b] = 1;
            adjGraph[b][a] = 1;
        }
        bfs.push(0);
        colour[0] = curColour;
        while(!bfs.empty() && possible)
        {
            curNode = bfs.front();
            bfs.pop();
            curColour = colour[curNode] ^ 1;
            for(int i = 0; i < v; i++)
            {
                if(adjGraph[curNode][i])
                {
                    if(colour[i] != 2 && colour[i] != curColour)
                    {
                        possible = false;
                        break;
                    }
                    else if(colour[i] == 2)
                    {
                        colour[i] = curColour;
                        bfs.push(i);
                    }
                }
            }
        }
        if(possible)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
