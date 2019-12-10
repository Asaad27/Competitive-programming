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
	int flag = 0;
	zcin(n,m);
	for (int i = 0; i < n; ++i)
	{
		if ((i&1) == 0)
		{
			for (int j = 0; j < m; ++j)
				cout<<"#";
			cout<<"\n";
		}
		else
		{
			if (!flag)
			{
				for (int j = 0; j < m-1; ++j)
					cout<<".";
				cout<<"#\n";
				flag = (flag+1)%2;
			}
			else
			{
				cout<<"#";
				for (int j = 0; j < m-1; ++j)
					cout<<".";
				cout<<"\n";
				flag = (flag+1)%2;
			}	
		}

	}

	return 0;
}
