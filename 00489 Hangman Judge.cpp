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
    ll charmask;
    int n;
    while(scanf("%d\n",&n) && n != -1)
    {
        charmask = 0;
        string s1,s2;
        cin >> s1;
        int i;
        iter(i,0,s1.size(),1)
        {
            charmask |= (1 << (s1[i] - 'a'));
        }
        //cout << charmask << endl;
        cin >> s2;
        int wrong = 0;
        ll mask2 = 0;
        iter(i,0,s2.size(),1)
        {
            ll temp = charmask & (1 << (s2[i] - 'a'));
            //cout << temp << endl;
            if(temp)
            {
                mask2 |= temp;
                if(charmask == mask2)
                    break;
            }
            else
            {
                wrong++;
                if(wrong >= 7) break;
            }
        }
        //cout << wrong << endl;
        if(charmask == mask2 && wrong < 7)
            printf("Round %d\nYou win.\n",n);
        else if(charmask != mask2 && wrong < 7)
            printf("Round %d\nYou chickened out.\n",n);
        else
            printf("Round %d\nYou lose.\n",n);
    }
    return 0;
}
