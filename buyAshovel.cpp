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

    zcin(k, r);
    int nb, i=1;

    nb = k%10;

    while((nb*i)%10 != r && (nb*i)%10 != 0)
    	i++;

    cout<<i;
	

	return 0;
}
