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
    map<char, char> board;
    int i;
    board['`'] = '`';
    board['1'] = '1';
    board['2'] = '2';
    board['3'] = '3';
    board['4'] = 'q';
    board['5'] = 'j';
    board['6'] = 'l';
    board['7'] = 'm';
    board['8'] = 'f';
    board['9'] = 'p';
    board['0'] = '/';
    board['-'] = '[';
    board['='] = ']';
    board['q'] = '4';
    board['w'] = '5';
    board['e'] = '6';
    board['r'] = '.';
    board['t'] = 'o';
    board['y'] = 'r';
    board['u'] = 's';
    board['i'] = 'u';
    board['o'] = 'y';
    board['p'] = 'b';
    board['['] = ';';
    board[']'] = '=';
    board['\\'] = '\\';
    board['a'] = '7';
    board['s'] = '8';
    board['d'] = '9';
    board['f'] = 'a';
    board['g'] = 'e';
    board['h'] = 'h';
    board['j'] = 't';
    board['k'] = 'd';
    board['l'] = 'c';
    board[';'] = 'k';
    board['\''] = '-';
    board['z'] = '0';
    board['x'] = 'z';
    board['c'] = 'x';
    board['v'] = ',';
    board['b'] = 'i';
    board['n'] = 'n';
    board['m'] = 'w';
    board[','] = 'v';
    board['.'] = 'g';
    board['/'] = '\'';
    board['~'] = '~';
    board['!'] = '!';
    board['@'] = '@';
    board['#'] = '#';
    board['$'] = 'Q';
    board['%'] = 'J';
    board['^'] = 'L';
    board['&'] = 'M';
    board['*'] = 'F';
    board['('] = 'P';
    board[')'] = '?';
    board['_'] = '{';
    board['+'] = '}';
    board['Q'] = '$';
    board['W'] = '%';
    board['E'] = '^';
    board['R'] = '>';
    board['T'] = 'O';
    board['Y'] = 'R';
    board['U'] = 'S';
    board['I'] = 'U';
    board['O'] = 'Y';
    board['P'] = 'B';
    board['{'] = ':';
    board['}'] = '+';
    board['|'] = '|';
    board['A'] = '&';
    board['S'] = '*';
    board['D'] = '(';
    board['F'] = 'A';
    board['G'] = 'E';
    board['H'] = 'H';
    board['J'] = 'T';
    board['K'] = 'D';
    board['L'] = 'C';
    board[':'] = 'K';
    board['\"'] = '_';
    board['Z'] = ')';
    board['X'] = 'Z';
    board['C'] = 'X';
    board['V'] = '<';
    board['B'] = 'I';
    board['N'] = 'N';
    board['M'] = 'W';
    board['<'] = 'V';
    board['>'] = 'G';
    board['?'] = '\"';
    board[' '] = ' ';
    char line[1010];
    while(gets(line))
    {
        iter(i,0,strlen(line),1)
            putchar(board[line[i]]);
        printf("\n");
    }
    return 0;
}
