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
char table[5][5];
map<char, pair<int, int> > table2;
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    int t; si(t);int i,j,x,y;
    cin.ignore(100,'\n');
    int check[26];
    table2.clear();
    string key = "", ans = "",codetemp = "";
    while(t--)
    {
        getline(cin,key);
        getline(cin,codetemp);
        fill(check,check+26,0);
        ans = "";
        x=y=0;
        iter(i,0,key.size(),1)
        {
            if(isalpha(key[i]))
            {
                if(check[key[i] - 'a'] == 0)
                {
                    check[key[i] - 'a']++;
                    table[x][y] = key[i] - 'a' + 'A';
                    table2[key[i] - 'a' + 'A'] = make_pair(x,y);
                    y++;
                    if(y>=5)
                    {
                        y = 0;
                        x++;
                    }
                }
            }
        }
        i = 0;
        bool first = true;
        iter(x,x,5,1)
        {
            iter(y,first?y:0,5,1)
            {
                while(check[i] != 0 || (i+'A') == 'Q') i++;
                table[x][y] = i + 'A';
                table2[i+'A'] = make_pair(x,y);
                i++;
                if(i > 26) break;
            }
            if(first) first = false;
        }
        transform(codetemp.begin(), codetemp.end(), codetemp.begin(), ::toupper);
        int i = 0;
        char a,b;
        while(i < codetemp.size())
        {
            if(!isalpha(codetemp[i]))
            {
                i++;
                continue;
            }
            a = codetemp[i];
            if(i+1 == codetemp.size())
            {
                b = 'X';
                i++;
            }
            else
            {
                while(!isalpha(codetemp[i+1])) i++;
                b = codetemp[i+1];
                if(a==b)
                {
                    b = 'X';
                    i++;
                }
                else i+= 2;
            }
            if(table2[a].first == table2[b].first)
            {
                a = table[table2[a].first][(table2[a].second+1)%5];
                b = table[table2[b].first][(table2[b].second+1)%5];
            }
            else if(table2[a].second == table2[b].second)
            {
                a = table[(table2[a].first+1)%5][table2[a].second];
                b = table[(table2[b].first+1)%5][table2[b].second];
            }
            else
            {
                char atemp = a, btemp = b;
                a = table[table2[atemp].first][table2[btemp].second];
                b = table[table2[btemp].first][table2[atemp].second];
            }
            ans += a;
            ans += b;
        }
        cout << ans << endl;
    }
    return 0;
}
