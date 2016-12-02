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
struct noom
{
    char name[25];
    int score;
};
bool ncompare(noom l, noom r){return l.score > r.score;}
bool ncompare2(noom l, noom r){return l.score >= r.score;}
void cScore(noom *n)
{
    int l = strlen(n->name);
    n->score = abs(n->name[0]-n->name[1]);
    int i;
    iter(i,1,l-1,1){n->score=min(n->score,abs(n->name[i]-n->name[i+1]));}
}
void noomcp(noom *n2, noom *n1)
{
    strcpy(n2->name,n1->name);
    n2->score = n1->score;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int i;
    char nam[25];
    noom temp,best;
    while(gets(nam)!=NULL)
    {
        strcpy(temp.name,nam);
        cScore(&temp);
        noomcp(&best,&temp);
        iter(i,0,10,1)
        {
            if(!prev_permutation(temp.name,temp.name+strlen(temp.name))){break;}
            else{
            cScore(&temp);
            if(ncompare2(temp,best)) noomcp(&best,&temp);}
            //printf("%s%d\n",temp.name,temp.score);
        }
        //printf("=====================");
        strcpy(temp.name,nam);
        cScore(&temp);
        iter(i,0,10,1)
        {
            if(!next_permutation(temp.name,temp.name+strlen(temp.name))){break;}
            else{
            cScore(&temp);
            if(ncompare(temp,best)) noomcp(&best,&temp);}
            //printf("%s%d\n",temp.name,temp.score);
        }
        printf("%s%d\n",best.name,best.score);
    }
    return 0;
}
