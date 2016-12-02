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
int deco(char c)
{
    if(c=='/') return 0;
    return 1;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int n; si(n);
    cin.ignore();
    char arr[100];
    string line;
    int m;
    while(n--)
    {
        getline(cin,line);
        m = line.size() - 2;
        fill(arr,arr+m+2,0);
        int i,j;
        iter(i,0,8,1)
        {
            getline(cin,line);
            //cout << line << endl;
            iter(j,1,m+1,1)
            {
                //cout << deco(line[j]);
                arr[j-1] = arr[j-1] + (deco(line[j])<<i);
                //printf(" %d ",arr[j-1]);
            }
            //cout << endl;
            //puts(arr);
        }
        //iter(i,0,m,1) printf("%d %c ",arr[i],arr[i]);
        getline(cin,line);
        getline(cin,line);
        puts(arr);
    }
    return 0;
}
