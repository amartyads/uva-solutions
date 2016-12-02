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
    int t;
    bool firstd = true;
    cin >> t;
    string read,x = "";
    vector<string> lols;
    while(t--)
    {
        if(firstd)
            firstd = false;
        else
            cout << endl;
        int n,i;
        cin >> n;
        lols.assign(n,"");
        x = "";
        cin.ignore();
        while(getline(cin,read))
        {
            x += read;
            if(x.size() == n)
                break;
        }
        lols[0] = x;
        stringstream ss;
        iter(i,1,n,1)
        {
            ss.str("");
            ss << x.substr(i,n-i) << x.substr(0,i) << i;
            lols[i] = ss.str();
        }
        string s1 = lols[1];
        sort(lols.begin(),lols.end());
        int pos = lower_bound(lols.begin(),lols.end(),s1) - lols.begin();
        if(!pos) pos = 1;
        string boot = "";
        cout << pos << endl;
        iter(i,0,n,1)
            boot += lols[i][n-1];
        iter(i,0,n,50)
            cout << boot.substr(i,50) << endl;
    }
    return 0;
}
