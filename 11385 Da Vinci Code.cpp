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
ll fibo[200];
void calcFibo()
{
    int i;
    fibo[0] = 1;
    fibo[1] = 2;
    iter(i,2,200,1)
        fibo[i] = fibo[i-1] + fibo[i-2];
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    calcFibo();
    map<ll, char> enc;
    string inp,ans;
    vector<ll> ctr;
    int t; cin >> t;
    int n,i;
    ll temp, up = -1;
    while(t--)
    {
        cin >> n;
        ctr.clear();
        enc.clear();
        ans = "";
        up = -1;
        iter(i,0,n,1)
        {
            cin >> temp;
            ctr.push_back(temp);
            up = max(temp,up);
        }
        cin.ignore(100,'\n');
        getline(cin,inp);
        int j = 0;
        iter(i,0,inp.size(),1)
        {
            if(j >= n) break;
            if(isupper(inp[i]))
            {
                enc[ctr[j++]] = inp[i];
            }
        }
//        for(auto it = enc.begin(); it != enc.end(); ++it)
//            cout << it->first << " " << it->second << endl;
        i = 0;
        while(fibo[i] <= up)
        {
            if(enc[fibo[i]] == '\0')
                ans += " ";
            else
                ans += enc[fibo[i]];
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
