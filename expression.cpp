/* *****************+*+*+*+*+*+*+*************************** */
/*      #      #####      #           #      #++++#			 */
/*     # #     +         # #         # #     #    #			 */
/*    #   #    +        #   #       #   #    #    #          */
/*   #+++++#   #####   #+++++#     #+++++#   #    #          */
/*  #       #      +  #       #   #       #  #    #          */
/* #         # ##### #         # #         # #++++# xXasaadXx*/
/* *****************+*+*+*+*+*+*+*************************** */

#include <bits/stdc++.h>

#define all(container) container.begin(), container.end()
#define csize(container) int(container.size())
const int MAXN = 1e5 + 5;

using namespace std;

int main()
{
	
    int x, y, z;
    cin>>x >>y >>z;

    int arr[]={x*y*z, (x+y)*z, x*(y+z), x+y*z, x*y+z, x+y+z};
    sort(arr, arr+6);	

    cout<<arr[5];

	return 0;
}

