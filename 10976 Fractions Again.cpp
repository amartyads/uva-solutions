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
#include <string>
#include <sstream>
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
    int n;
    vector<string> op;
    while(si(n) == 1)
    {
        //printf("%d\n",n);
        op.clear();
        int i = n+1;
        //cout << kick << endl;
        int ch;
        while(i <= 2*n)
        {
            //cout << val1 << endl;
            if((i * n) % (i - n) == 0)
            {
                stringstream sst;
                sst << "1/" << n << " = 1/" << ((i*n)/(i-n)) << " + 1/" << i;
                op.push_back(sst.str());
            }
            i++;
        }
        cout << op.size() << endl;
        for(auto it = op.begin(); it != op.end(); ++it)
        {
            cout << *it << endl;
        }
    }
    return 0;
}
