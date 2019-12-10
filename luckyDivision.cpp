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

bool isLucky(int n)
{
	while(n)
	{
		if (n%10 != 7 && n%10 != 4)
			return false;
		n /= 10;
	}
	return true;
}

int main()
{
	
    int n;
    cin>>n;

    if (isLucky(n))
    {
    	cout<<"YES";
    	return 0;
    }
    else
    {
    	for (int i = 4; i <= n/2; i++)
    	{
    		if (n%i == 0 && isLucky(i))
    		{
    			cout<<"YES";
    			return 0;    		
    		}

    	}
    }

    cout<<"NO";

	return 0;
}
