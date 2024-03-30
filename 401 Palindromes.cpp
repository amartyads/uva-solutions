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

bool isPalindrome(string s)
{
    string scopy = s;
    reverse(scopy.begin(), scopy.end());
    return (s == scopy);
}

int main()
{
    //freopen("1in.txt", "r", stdin);
    //freopen("1out.txt", "w", stdout);
    map<char,char> mirror;
    mirror['A'] = 'A';
    mirror['E'] = '3';
    mirror['H'] = 'H';
    mirror['I'] = 'I';
    mirror['J'] = 'L';
    mirror['L'] = 'J';
    mirror['M'] = 'M';
    mirror['O'] = 'O';
    mirror['S'] = '2';
    mirror['T'] = 'T';
    mirror['U'] = 'U';
    mirror['V'] = 'V';
    mirror['W'] = 'W';
    mirror['X'] = 'X';
    mirror['Y'] = 'Y';
    mirror['Z'] = '5';
    mirror['1'] = '1';
    mirror['2'] = 'S';
    mirror['3'] = 'E';
    mirror['5'] = 'Z';
    mirror['8'] = '8';
    string s;
    bool isPal, isMir, mirSuc;
    char temp;
    while(getline(cin,s))
    {
        if(cin.bad())
            break;
        isPal = isMir = false;
        string scopy = s;
        reverse(scopy.begin(), scopy.end());
        isPal = (s == scopy);
        stringstream ss;
        mirSuc = true;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            temp = mirror[*it];
            if(temp == '\0')
            {
                mirSuc = false;
                break;
            }
            ss << temp;
        }
        scopy = ss.str();
        reverse(scopy.begin(), scopy.end());
        isMir = mirSuc && (s == scopy);
        if(isMir && isPal)
        {
            cout << s << " -- is a mirrored palindrome." << endl << endl;
        }
        else if(isMir)
        {
            cout << s << " -- is a mirrored string." << endl << endl;
        }
        else if(isPal)
        {
            cout << s << " -- is a regular palindrome." << endl << endl;
        }
        else
        {
            cout << s << " -- is not a palindrome." << endl << endl;
        }
    }
    return 0;
}
