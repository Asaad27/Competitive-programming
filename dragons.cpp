/* *****************+*+*+*+*+*+*+*************************** */
/*      #      #####      #           #      #0000#          */
/*     # #     +         # #         # #     #    #          */
/*    #   #    +        #   #       #   #    #    #          */
/*   #+++++#   #####   #+++++#     #+++++#   #    #          */
/*  #       #      +  #       #   #       #  #    #          */
/* #         # ##### #         # #         # #0000# xXasaadXx*/
/* *****************+*+*+*+*+*+*+*************************** */

#include <bits/stdc++.h>

#define all(container) container.begin(), container.end()
#define csize(container) int(container.size())
const int MAXN = 1e5 + 5;

using namespace std;

int main()
{
	vector<pair<int,int>> zvect ;
	int s, y;
	scanf("%d %d ", &s, &y);

	for (int i = 0; i < y; ++i)
	{
		int temp1, temp2;
		cin>>temp1 >>temp2;
		zvect.push_back(make_pair(temp1, temp2));
	}
	sort(zvect.begin(), zvect.end());

	for (auto element :zvect)
	{
		if (s > element.first)
			s += element.second;
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";


	return 0;
}
