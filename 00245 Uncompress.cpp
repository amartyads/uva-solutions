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
vector<string> words;
string opLine;
char line[200];
char temp[202];
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    char* ptr;
    bool done = false;
    while(!done && fgets(line,200,stdin))
    {
        opLine = "";
        ptr = line;
        while(*ptr != '\0' && !done)
        {
            if(isdigit(*ptr))
            {
                char* end = ptr;
                int n = 0;
                while(isdigit(*end))
                {
                    n = n*10 + (*end - '0');
                    end++;
                }
                if(n == 0)
                {
                    done = true;
                    break;
                }
                string te = words[words.size()-n];
                words.erase(words.end()-n);
                words.push_back(te);
                opLine += te + *end;
                ptr = end;
            }
            else if(isalpha(*ptr))
            {
                char* end = ptr;
                opLine += *ptr;
                while(isalpha(*end)){ end++; opLine += *end; }
                strncpy(temp,ptr,end-ptr);
                string te(temp);
                words.push_back(te);
                fill(temp,temp+((end-ptr)+2),'\0');
                ptr = end;
            }
            else
                opLine += *ptr;
            ptr++;
        }
        cout << opLine;
    }
    return 0;
}
