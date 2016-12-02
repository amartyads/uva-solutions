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
int main()
{
    freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);
    vector<string> ignore;
    vector<string> sentences;
    multimap<string, string> locs;
    string temp,temp2,temp3;
    while(cin >> temp)
    {
        if(temp == "::") break;
        ignore.push_back(temp);
    }
    sort(ignore.begin(),ignore.end());
    int i = 0;
    getline(cin,temp);
    while(getline(cin,temp) && !temp.empty())
    {
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        int start = 0;
        int end = temp.find(' ');
        while(end != string::npos)
        {
            temp2 = temp.substr(start,end - start);
            if(!binary_search(ignore.begin(),ignore.end(),temp2))
            {
                transform(temp2.begin(),temp2.end(),temp2.begin(),::toupper);
                locs.insert(make_pair(temp2, (temp.substr(0,start)+temp2+temp.substr(end))));
            }
            start = end + 1;
            end = temp.find(' ',start);
        }
        temp2 = temp.substr(start,end);
        if(!binary_search(ignore.begin(),ignore.end(),temp2))
        {
            transform(temp2.begin(),temp2.end(),temp2.begin(),::toupper);
            locs.insert(make_pair(temp2,temp.substr(0,start)+temp2));
        }
        i++;
    }
    for(auto it = locs.begin(); it!=locs.end(); ++it)
    {
        cout << it->second << endl;
    }
    return 0;
}
