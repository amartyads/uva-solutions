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
    map<string,int> lel;
    int i,j,k,l,m;
    string stof[26];
    iter(i,0,26,1) stof[i] = string(1,'a'+i);
    int ct = 1;
    iter(i,0,26,1)
        lel[stof[i]] = ct++;
    iter(i,0,25,1) iter(j,i+1,26,1)
        lel[stof[i] + stof[j]] = ct++;
    iter(i,0,24,1) iter(j,i+1,25,1) iter(k,j+1,26,1)
        lel[stof[i] + stof[j] + stof[k]] = ct++;
    iter(i,0,23,1) iter(j,i+1,24,1) iter(k,j+1,25,1) iter(l,k+1,26,1)
        lel[stof[i] + stof[j] + stof[k] + stof[l]] = ct++;
    iter(i,0,22,1) iter(j,i+1,23,1) iter(k,j+1,24,1) iter(l,k+1,25,1) iter(m,l+1,26,1)
        lel[stof[i] + stof[j] + stof[k] + stof[l] + stof[m]] = ct++;

    string s;
    while(getline(cin,s))
    {
        cout << lel[s] << endl;
    }
    return 0;
}
