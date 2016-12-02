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
    stack<int> st;
    queue<int> qu;
    priority_queue<int> pq;
    bool isSt,isQu,isPq;
    int typ,x,temp;
    while(si(n)!=EOF)
    {
        while(!st.empty()) st.pop();
        while(!qu.empty()) qu.pop();
        while(!pq.empty()) pq.pop();
        isSt = isQu = isPq = true;
        while(n--)
        {
            si(typ);si(x);
            if(typ == 1)
            {
                if(isSt) st.push(x);
                if(isQu) qu.push(x);
                if(isPq) pq.push(x);
            }
            else if(typ == 2)
            {
                if(isSt)
                {
                    if(st.empty()) isSt = false;
                    else
                    {
                        temp = st.top();
                        st.pop();
                        if(temp != x) isSt = false;
                    }
                }
                if(isQu)
                {
                    if(qu.empty()) isQu = false;
                    else
                    {
                        temp = qu.front();
                        qu.pop();
                        if(temp != x) isQu = false;
                    }
                }
                if(isPq)
                {
                    if(pq.empty()) isPq = false;
                    else
                    {
                        temp = pq.top();
                        pq.pop();
                        if(temp != x) isPq = false;
                    }
                }
            }
        }
        if(isQu | isSt | isPq)
        {
            if(isQu & !isSt & !isPq)
                puts("queue");
            else if(isSt & !isQu & !isPq)
                puts("stack");
            else if(isPq & !isSt & !isQu)
                puts("priority queue");
            else
                puts("not sure");
        }
        else
            puts("impossible");
    }
    return 0;
}
