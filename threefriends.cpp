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

const int* max3(int* a, int* b, int* c)
{
    const int *ptr = &max(*a, max(*b, *c));
    return ptr;
}
const int* min3(int* a, int* b, int* c)
{
    const int *ptr = &min(*a, min(*b, *c));
    return ptr;
}

int main()
{
	
    int testcases;
    cin >> testcases;
    
    while (testcases--)
    {
    		int zarr[3];
            cin >> zarr[0] >> zarr[1] >> zarr[2];
            sort(zarr, zarr + 3);

            int z = zarr[2] - zarr[1] + zarr[2] - zarr[0] + zarr[1] - zarr[0];

            cout<<max(z - 4, 0)<<"\n";
    }
    

	return 0;
}
