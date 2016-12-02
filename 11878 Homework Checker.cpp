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
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    char c = '\0';
    char op;
    int n1,n2,ans;
    int noCor = 0;
    while(c = getchar(),c!=EOF)
    {
        n1 = n2 = ans = 0;
        while(isdigit(c))
        {
            n1 = n1*10 + (c-'0');
            c = getchar();
        }
        op = c;
        c = getchar();
        while(isdigit(c))
        {
            n2 = n2*10 + (c-'0');
            c = getchar();
        }
        c = getchar();
        if(c != '?')
        {
            while(isdigit(c))
            {
                ans = ans*10+(c-'0');
                c = getchar();
            }
            if((op == '+' && n1+n2==ans)||(op == '-' && n1-n2==ans))
                noCor++;

        }
        else
            c = getchar();
        //cout << n1 <<  " "  << n2 << " " << ans << endl;
    }
    printf("%d\n",noCor);
    return 0;
}
