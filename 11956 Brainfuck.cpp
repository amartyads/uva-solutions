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
    int n;scanf("%d\n",&n);
    char commands[100010];
    int memory[100];
    int i,j;
    iter(i,0,n,1)
    {
        int ptr = 0;
        gets(commands);
        int len = strlen(commands);
        fill(memory,memory+100,0);
        iter(j,0,len,1)
        {
            if(commands[j] == '<'){ ptr--; if(ptr == -1) ptr = 99;}
            if(commands[j] == '>') ptr = (ptr + 1) % 100;
            if(commands[j] == '+') memory[ptr] = (memory[ptr] + 1) % 256;
            if(commands[j] == '-') {memory[ptr]--; if(memory[ptr] == -1) memory[ptr] = 255;}
        }
        printf("Case %d:",i+1);
        iter(j,0,100,1)
            printf(" %.2X",memory[j]);
        printf("\n");
    }
    return 0;
}
