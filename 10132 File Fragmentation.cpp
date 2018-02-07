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
    int n; si(n); cin.ignore();cin.ignore();
    vector<string> frug;
    map<string,int> ctr;
    int tot;
    string s1;
    int i,j;
    bool fst = true;
    while(n--)
    {
        //cin.ignore();
        if(fst) fst = false;
        else cout << endl;
        frug.clear();
        ctr.clear();
        tot = 0;
        while(getline(cin,s1) && s1.size() != 0)
        {
            //cout << s1 << " " << s1.size() << endl;
            tot += s1.size();
            frug.push_back(s1);
        }
        tot *= 2;
        tot /= frug.size();
        iter(i,0,frug.size()-1,1)
        {
            iter(j,i+1,frug.size(),1)
            {
                if((frug[i]+frug[j]).size() == tot)
                {
                    ctr[frug[i]+frug[j]]++;
                    ctr[frug[j]+frug[i]]++;
                }
            }
        }
        tot = 0;
        for(auto it = ctr.begin(); it != ctr.end(); ++it)
        {
            if(it->second > tot)
            {
                tot = it->second;
                s1 = it->first;
            }
        }
        cout << s1 << endl;
    }
    return 0;
}
