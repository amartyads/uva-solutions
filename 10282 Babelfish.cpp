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
    map<string,string> dict;
    string temp,temp2;
    while(getline(cin,temp) && !temp.empty())
    {
        /*cin >> temp;
        cout << "t1";
        if(temp.compare() == 0) break;
        cin >> temp2;
        cout << "t2";*/
        temp2 = temp.substr(temp.find(" ") + 1);
        temp.erase(temp.find(" "));
        dict.insert(pair<string,string>(temp2,temp));
    }
    while(getline(cin,temp))
    {
        if(temp.compare("") == 0) break;
        temp2 = dict[temp];
        if(temp2.compare("") == 0) puts("eh");
        else cout << temp2 << endl;
    }
    return 0;
}
