/* *****************+*+*+*+*+*+*+*************************** */
/*      #      #####      #           #      #0000#          */
/*     # #     +         # #         # #     #    #          */
/*    #   #    +        #   #       #   #    #    #          */
/*   #+++++#   #####   #+++++#     #+++++#   #    #          */
/*  #       #      +  #       #   #       #  #    #          */
/* #         # ##### #         # #         # #0000# xXasaadXx*/
/* *****************+*+*+*+*+*+*+*************************** */

#include <bits/stdc++.h>

#define zsize(container) int(container.size())
#define zcin(n, m)   int n, m; cin>>n>>m;
#define zcout(n, m)  cout<<n<<" "<<m;
const int MAXN = 1e5 + 5;

using namespace std;

int main()
{
	
    int zarr[]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, sm = 0;
    zcin(a,b);
    for (int i = a; i <= b; ++i)
    {
    	int ti = i;
    	if (!ti)
    		sm += zarr[ti];
    	while (ti)
    			{
    				sm += zarr[ti % 10];
    				ti /= 10;
    			}			
    	
    }
    cout<<sm;



	return 0;
}
