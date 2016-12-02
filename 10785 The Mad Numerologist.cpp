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
    char vowel[] = {'A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A',
                    'U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U','U',
                    'E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E','E',
                    'O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O',
                    'I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I','I'};
    char conso[] = {'J','J','J','J','J','S','S','S','S','S','B','B','B','B','B','K','K','K','K','K','T','T','T','T','T',
                    'C','C','C','C','C','L','L','L','L','L','D','D','D','D','D','M','M','M','M','M','V','V','V','V','V',
                    'N','N','N','N','N','W','W','W','W','W','F','F','F','F','F','X','X','X','X','X','G','G','G','G','G',
                    'P','P','P','P','P','Y','Y','Y','Y','Y','H','H','H','H','H','Q','Q','Q','Q','Q','Z','Z','Z','Z','Z',
                    'R','R','R','R','R'};
    int t; si(t);int x = 0;
    vector<char> tv,tc;
    while(t--)
    {
        int n; si(n);
        int i = 0,j = 0;
        tv.clear();
        tc.clear();
        printf("Case %d: ",++x);
        while(i + j < n)
        {
            if(i == j) tv.push_back(vowel[i++]);
            else tc.push_back(conso[j++]);
        }
        sort(tv.begin(),tv.end());
        sort(tc.begin(),tc.end());
        i = j = 0;
        while(i + j < n)
        {
            if(i == j) printf("%c",tv[i++]);
            else printf("%c",tc[j++]);
        }
        printf("\n");
    }
    return 0;
}
