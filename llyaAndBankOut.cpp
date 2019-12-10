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
    cin>>n;

    int zunit = abs(n)%10, zdecim = (abs(n)/10)%10;

    if (n>= 0)
    	cout<<n;
    else if (zunit > zdecim)
    	cout<<-(abs(n)-zunit)/10;
    else
    	cout<<-(abs(n)/10 +zunit - zdecim);
	return 0;
}
