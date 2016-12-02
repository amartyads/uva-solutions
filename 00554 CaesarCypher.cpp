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
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    set<string> dict;
    string temp;
    char line[260],tok[260];
    while(getline(cin,temp) && temp != "#")
        dict.insert(temp);
    gets(line);
    string ans;
    int k,i,maxK = -1,score;
    int up = strlen(line);
    iter(k,1,27,1)
    {
        score = 0;
        iter(i,0,up,1)
        {
            if(line[i] == ' ') line[i] = 'A';
            else if(line[i] == 'Z') line[i] = ' ';
            else line[i]++;
        }
        strcpy(tok,line);
        char* ptr = strtok(tok," ");
        while(ptr != NULL)
        {
            temp = ptr;
            if(binary_search(dict.begin(),dict.end(),temp)) score++;
            ptr = strtok(NULL," ");
        }
        if(score > maxK)
        {
            maxK = score;
            ans = line;
        }
    }
    strcpy(line,ans.c_str());
    bool fw = true;
    int charSoFar = 0;
    char* ptr = strtok(line," ");
    while(ptr != NULL)
    {
        if(fw)
        {
            charSoFar += strlen(ptr);
            printf("%s", ptr);
            fw = false;
        }
        else
        {
            charSoFar += strlen(ptr) + 1;
            if(charSoFar > 60)
            {
                printf("\n%s",ptr);
                charSoFar = strlen(ptr);
            }
            else
            {
                printf(" %s",ptr);
            }
        }
        ptr = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
