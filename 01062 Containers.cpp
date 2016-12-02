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
	char list[1010],oth[1010];
	int len,ans,i,j,caseno = 1,uniq;
	int freq[26];
	//bool inc;
	while(gets(list)!= NULL && strcmp(list,"end"))
	{
		len = strlen(list);
		strcpy(oth,list);
		sort(oth,oth+len);
		ans = 1;
		uniq = 1;
		fill(freq,freq+26,0);
		//inc = true;
		if(len > 1)
		{
			iter(i,0,len-1,1)
			{
				freq[list[i] - 'A']++;
				if(list[i] < list[i+1])
				{
					ans++;
				}
				//else
				//{
				//	inc = false;
				//}YDYDYFYGHSKSANN
				if(oth[i] != oth[i+1])
					uniq++;
			}
			freq[list[len-1] - 'A']++;
			iter(i,0,26,1) if(freq[i]) freq[i]++;
			//iter(i,0,26,1) printf("%d ",freq[i]);
			//printf("\n");
			bool preF[26];
			fill(preF,preF+26,false);
			iter(i,0,len,1)
			{
				freq[list[i]-'A']--;
				if(!preF[list[i]-'A'])
				{
					iter(j,list[i] - 'A' + 1 ,26,1)
					{
						if(freq[j] == 1)
						{
							//printf("found for %c at %c\n",list[i],j+'A');
							uniq--;
							freq[j] = 0;
							//freq[list[i]-'A']++;
							break;
						}
					}
				}
				preF[list[i]-'A'] = true;
			}
		}
		if(len == 1) ans = 1; // || inc
		else ans = min(uniq,ans);
		printf("Case %d: %d\n",caseno,ans);
		caseno++;
	}
    return 0;
}
