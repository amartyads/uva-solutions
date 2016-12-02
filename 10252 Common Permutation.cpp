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
    string a,b;
    string ans;
    int i,j;
    while(getline(cin,a))
    {
        getline(cin,b);
        ans = "";
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        i=j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                ans+=a[i];
                i++;j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
