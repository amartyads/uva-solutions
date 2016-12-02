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
    int mat[26][26];
    int n; cin >> n;
    while(n--)
    {
        int i,j,k,l;
        string s;
        cin >> s;
        int len = s.size();
        mat[0][0] = s[0]-'0'==1?1:-1e5;
        iter(i,1,len,1)
        {
            mat[0][i] = s[i]-'0'==1?1:-1e5;
            mat[0][i] += mat[0][i-1];
        }
        iter(i,1,len,1)
        {
            cin >> s;
            iter(j,0,len,1)
            {
                mat[i][j] = s[j]-'0'==1?1:-1e5;
                mat[i][j] += mat[i-1][j];
                if(j > 0) { mat[i][j] += mat[i][j-1]; mat[i][j] -= mat[i-1][j-1];}
            }
        }
        int maxs = 0;
        int sum;
        iter(i,0,len,1) iter(j,0,len,1)
        iter(k,i,len,1) iter(l,j,len,1)
        {
            sum = mat[k][l];
            if(i > 0) sum -= mat[i-1][l];
            if(j > 0) sum -= mat[k][j-1];
            if(i > 0 && j > 0) sum += mat[i-1][j-1];
            //cout << sum << " ";
            maxs = max(maxs,sum);
        }
        cout << maxs << endl ;
        if(n!= 0) cout << endl;
    }
    return 0;
}
