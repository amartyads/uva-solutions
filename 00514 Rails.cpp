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
#include <limits>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define seto(a,n,x) for(int zyzzy = 0; zyzzy < n; zyzzy++) a[zyzzy] = x
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
    bool okay;
    int i;
    while(true)
    {
        si(n);
        if(n==0) break;
        okay = true;
        int fnum,sid,temp;
        int seq[n];
        while(true)
        {
            stack<int> nums;
            sid = 0;
            si(fnum);
            if(!fnum)
            {
                break;
            }
            else
            {
                seq[0] = fnum;
                iter(i,1,n,1) si(seq[i]);
                iter(i,1,n+1,1)
                {
                    nums.push(i);
                    //printf("pushed %d",i);
                    if(nums.top() == seq[sid])
                    {
                        while(!nums.empty() && nums.top() == seq[sid])
                        {
                            //printf("popped %d",nums.top());
                            nums.pop();
                            sid++;
                        }
                    }
                }
                if(!nums.empty()) puts("No");
                else puts("Yes");
            }
        }
        printf("\n");
    }
    return 0;
}
