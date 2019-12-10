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
#define zcin(n, m)   int n, m; cin>>n>>m;
const int MAXN = 1e5 + 5;

using namespace std;

int main()
{
	int n;
	cin>>n;
	set<int> zset;
	int p, q;
	cin>>p;
	while(p--)
	{
		int temp;
		cin>>temp;
		zset.insert(temp);
	}
	cin>>q;
	while(q--)
	{
		int temp;
		cin>>temp;
		zset.insert(temp);
	}

	if (csize(zset) == n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";


	return 0;
}
