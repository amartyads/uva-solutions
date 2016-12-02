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
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int i = 0; i < n; i++) a[i] = x
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d",&a)
#define sli(a) scanf("%I32d",&a)
#define sll(a) scanf("%I64d",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926
using namespace std;
int main()
{
    int t; si(t);
    int j = 0;
    iter(j,0,t,1)
    {
        vector<pair<string, int> > uris;
        int i = 0;
        iter(i,0,10,1){string temp; int rev; cin >> temp >> rev; uris.push_back(pair<string, int> (temp,rev));}
        int maxi = 0;
        iter(i,0,10,1){maxi = maxi < uris[i].second? uris[i].second : maxi;}
        vector<pair<string,int> > ans;
        iter(i,0,10,1){if(uris[i].second == maxi){ans.push_back(uris[i]);}}
        cout << "Case #" << j+1 <<":"<< endl;
        iter(i,0,ans.size(),1)
            cout << ans[i].first << endl;
    }
}
