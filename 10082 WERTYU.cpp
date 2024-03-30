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
    map<char,char> keys;
    keys['W'] = 'Q';
    keys['E'] = 'W';
    keys['R'] = 'E';
    keys['T'] = 'R';
    keys['Y'] = 'T';
    keys['U'] = 'Y';
    keys['I'] = 'U';
    keys['O'] = 'I';
    keys['P'] = 'O';
    keys['['] = 'P';
    keys[']'] = '[';
    keys['\\'] = ']';
    keys['S'] = 'A';
    keys['D'] = 'S';
    keys['F'] = 'D';
    keys['G'] = 'F';
    keys['H'] = 'G';
    keys['J'] = 'H';
    keys['K'] = 'J';
    keys['L'] = 'K';
    keys[';'] = 'L';
    keys['\''] = ';';
    keys['X'] = 'Z';
    keys['C'] = 'X';
    keys['V'] = 'C';
    keys['B'] = 'V';
    keys['N'] = 'B';
    keys['M'] = 'N';
    keys[','] = 'M';
    keys['.'] = ',';
    keys['/'] = '.';
    keys['1'] = '`';
    keys['2'] = '1';
    keys['3'] = '2';
    keys['4'] = '3';
    keys['5'] = '4';
    keys['6'] = '5';
    keys['7'] = '6';
    keys['8'] = '7';
    keys['9'] = '8';
    keys['0'] = '9';
    keys['-'] = '0';
    keys['='] = '-';
    keys[' '] = ' ';
    keys['\n'] = '\n';

    char c;
    while((c = getchar()) != EOF)
    {
        putchar(keys[c]);
    }
    return 0;
}
