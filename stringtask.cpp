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
	
    string zs;
    cin>>zs;
    for (auto el :zs )
    {
    	el = (char)tolower(el);
    	if (el == 'a' || el == 'o' || el =='y' || el == 'u' || el == 'e' || el == 'i' )
    	{
    		continue;
    	}
    	else
    	{
    		cout<<".";
    		cout<<el;
    	}
    }
    
    

	return 0;
}
