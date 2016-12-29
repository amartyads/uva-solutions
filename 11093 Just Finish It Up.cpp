#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <bitset>
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
//    freopen("1in.txt", "r", stdin);
//    freopen("1out.txt", "w", stdout);
    int t; si(t);
    int distances[100001], fuels[100001], cars[100001],indexes[100001];
    //bool running[100001];
    vector<int> runCars;
    int ca = 0;
    while(t--)
    {
        int sts; si(sts);
        int i,j;
        runCars.clear();
        iter(i,0,sts,1) si(fuels[i]);
        iter(i,0,sts,1) { si(distances[i]); indexes[i] = i; if(distances[i] <= fuels[i]) runCars.push_back(i);}
        fill(cars, cars + sts, 0);
        //fill(running, running + sts, true);
        if(accumulate(fuels,fuels+sts,0) < accumulate(distances,distances+sts,0))
            runCars.clear();
        else
        {
            iter(i,0,sts,1)
            {
                for(auto it = runCars.begin(); it != runCars.end(); ++it)
                //iter(j,0,sts,1)
                {
                    //if(running[j])
                    //{
                        //cout << *it << endl;
                        cars[*it] += fuels[indexes[*it]];
                        cars[*it] -= distances[indexes[*it]];
                        if(cars[*it] < 0)
                        {
                            //running[j] = false;
                            runCars.erase(it);
                            --it;
                        }
                        else
                            indexes[*it] = (indexes[*it] + 1) % sts;
                    //}
                    if(runCars.empty()) break;
                }
            }
        }
        //int fInd = -1;
        //iter(i,0,sts,1) if(running[i]) {fInd = i; break;}
        printf("Case %d: ",++ca);
        //if(fInd != -1) printf("Possible from station %d\n",fInd+1);
        if(!runCars.empty()) printf("Possible from station %d\n",runCars[0] + 1);
        else printf("Not possible\n");
    }
    return 0;
}
