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
#include <set>
#include <limits>
#define iter(a,b,c,d) for(a = b; a < c; a+=d)
#define ited(a,b,c,d) for(a = b; a > c; a-=d)
#define li long int
#define uli unsigned li
#define ll long li
#define ull unsigned ll
#define si(a) scanf("%d",&a)
#define sli(a) scanf("%I32d",&a)
#define sll(a) scanf("%I64d",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
#define PI 3.1415926

#define PLAYER 2
#define DEALER 1
using namespace std;
int getVal(char val)
{
    if(val == 'J') return 1;
    if(val == 'Q') return 2;
    if(val == 'K') return 3;
    if(val == 'A') return 4;
    return 0;
}
int main()
{
    /*freopen("1in.txt", "r", stdin);
    freopen("1out.txt", "w", stdout);*/
    char tempcard[3];
    int gameno = 0;
    while(scanf("%s",tempcard) && strcmp(tempcard,"#"))
    {
        gameno++;
        deque<int> player,dealer;
        int i;
        player.push_front(getVal(tempcard[1]));
        scanf("%s",tempcard);
        dealer.push_front(getVal(tempcard[1]));
        iter(i,0,25,1)
        {
            scanf("%s",tempcard);
            player.push_front(getVal(tempcard[1]));
            scanf("%s",tempcard);
            dealer.push_front(getVal(tempcard[1]));
        }

        /*deque<int>::iterator it = dealer.begin();
        while(it != dealer.end()) printf("%d ",*it++);
        it = player.begin();
        cout << endl;
        while(it != player.end()) printf("%d ",*it++);
        cout << endl;*/

        deque<int> pile;
        int turn = PLAYER, winner = 0;
        int playCard;
        bool gameWon = false;
        while(!gameWon)
        {
            playCard = 0;
            if(pile.empty() || pile.front() == 0)
            {
                if(turn == DEALER) {if(dealer.empty()) gameWon = true; else{playCard = dealer.front(); dealer.pop_front();}}
                else {if(player.empty()) gameWon = true;else{playCard = player.front(); player.pop_front();}}
                pile.push_front(playCard);
                //cout << turn << " plays " << playCard <<endl;
                if(playCard != 0) winner = turn;
            }
            else
            {
                if(turn == DEALER)
                {
                    int penalty = pile.front();
                    iter(i,0,penalty,1)
                    {
                        if(dealer.empty())
                        {
                            gameWon = true;
                            break;
                        }
                        else
                        {
                            playCard = dealer.front();
                            dealer.pop_front();
                            pile.push_front(playCard);
                            if(playCard != 0){ winner = turn; break;}
                        }
                    }
                    if(winner != turn && !gameWon)
                    {
                        while(!pile.empty())
                        {
                            player.push_back(pile.back());
                            pile.pop_back();
                        }
                    }
                }
                else
                {
                    int penalty = pile.front();
                    iter(i,0,penalty,1)
                    {
                        if(player.empty())
                        {
                            gameWon = true;
                            break;
                        }
                        else
                        {
                            playCard = player.front();
                            player.pop_front();
                            pile.push_front(playCard);
                            if(playCard != 0){ winner = turn; break;}
                        }
                    }
                    if(winner != turn && !gameWon)
                    {
                        while(!pile.empty())
                        {
                            dealer.push_back(pile.back());
                            pile.pop_back();
                        }
                    }
                }
                winner = 0;
            }
            turn = turn==PLAYER?DEALER:PLAYER;
        }
        printf("%d%3d\n",turn,dealer.size()+player.size());
    }
    return 0;
}
