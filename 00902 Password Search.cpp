#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <numeric>
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
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int n,i; string s,temp;
    map<string, int> words;
    string ans; int mxfreq = -1;
    while(cin >> n >> s)
    {
        words.clear();
        //cout << n << s << " ";
        mxfreq = -1;
        iter(i,0,s.size()-n+1,1)
        {
            temp = s.substr(i,n);
            words[temp]++;
            if(words[temp] >= mxfreq)
            {
                ans = temp;
                mxfreq = words[temp];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
