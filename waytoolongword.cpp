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

    int n;
    scanf("%d ", &n);

    while(n--)
    {
    	string s;
    	cin>>s;
    	int len;
    	len = s.length();
    	if (len > 10)
    	{
    		cout<<s[0]<<len-2<<s[len-1]<<endl;
    	}
    	else
    		cout<<s<<endl;
    }

	return 0;
}
