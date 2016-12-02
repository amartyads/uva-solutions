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
vector<string> dict, ans;
string reg;
int lenD,noReg;
void getAns(int index,string soFar)
{
    int i;
    if(index == reg.size())
    {
        ans.push_back(soFar);
        return;
    }
    if(reg[index] == '#')
    {
        iter(i,0,lenD,1)
        {
            getAns(index+1,soFar + dict[i]);
        }
    }
    else if(reg[index] == '0')
    {
        getAns(index+1, soFar + "0");
        getAns(index+1, soFar + "1");
        getAns(index+1, soFar + "2");
        getAns(index+1, soFar + "3");
        getAns(index+1, soFar + "4");
        getAns(index+1, soFar + "5");
        getAns(index+1, soFar + "6");
        getAns(index+1, soFar + "7");
        getAns(index+1, soFar + "8");
        getAns(index+1, soFar + "9");
    }
    return;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    string temp, tempreg;
    while(cin >> lenD)
    {
        int i;
        dict.assign(lenD,"");
        iter(i,0,lenD,1){cin >> dict[i];}
        cin >> noReg;
        iter(i,0,noReg,1)
        {
            ans.clear();
            cout << "--" << endl;
            cin >> reg;
            getAns(0,"");
            //sort(ans.begin(),ans.end());
            for(auto it = ans.begin();it != ans.end();++it)
                cout << *it << endl;
        }
    }
    return 0;
}
