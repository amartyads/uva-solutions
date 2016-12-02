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
vector<int> vals;
int tot,temp,mxans,mxTracksSoFar,len;
ll mask;
void getAns(int index, int totSoFar, int maskSoFar)
{
    if(totSoFar > tot || index > len)
        return;
    if(totSoFar > mxans || (totSoFar == mxans && __builtin_popcount(maskSoFar) >= mxTracksSoFar))
    {
        mxans = totSoFar;
        mxTracksSoFar = __builtin_popcount(maskSoFar);
        mask = maskSoFar;
    }
    getAns(index+1,totSoFar+vals[index],maskSoFar|(1<<index));
    getAns(index+1,totSoFar,maskSoFar);
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    string s;
    stringstream ss;
    int i;
    while(getline(cin,s) && !s.empty())
    {
        vals.clear();
        mask = mxans = mxTracksSoFar = 0;
        ss.clear();
        ss.str(s);
        ss >> tot >> len;
        while(ss >> temp){vals.push_back(temp);}
        mxans = -1;
        getAns(0,0,0);
        iter(i,0,len,1)
        {
            if(mask&1) cout << vals[i] << " ";
            mask >>= 1;
        }
        cout << "sum:" << mxans << endl;
    }
    return 0;
}
