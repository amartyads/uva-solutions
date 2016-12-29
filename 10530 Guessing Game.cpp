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
    int val,i;
    string cur;
    bool arr[11];
    fill(arr,arr+11,true);
    while(true)
    {
        cin >> val;
        if(!val) break;
        cin.ignore();
        getline(cin,cur);
        if(cur == "too high")
            fill(arr+val,arr+11,false);
        else if(cur == "too low")
            fill(arr,arr+val+1,false);
        else
        {
            if(arr[val])
                cout << "Stan may be honest" << endl;
            else
                cout << "Stan is dishonest" << endl;
            fill(arr,arr+11,true);
        }
    }
    return 0;
}
