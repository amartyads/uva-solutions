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
    int t,i;
    li money,temp;
    vector<li> books;
    while(scanf("%d",&t) == 1 && t)
    {
        books.clear();
        iter(i,0,t,1) {sli(temp);books.push_back(temp);}
        sli(money);
        sort(books.begin(),books.end());
        i = books.size()-2;
        while(i >= 0)
        {
            temp = books[i];
            if(binary_search(books.begin()+i+1,books.end(),money-temp)) break;
            i--;
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",temp,*(lower_bound(books.begin(),books.end(),money-temp)));
    }
    return 0;
}
