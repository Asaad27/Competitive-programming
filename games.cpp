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

   	int n, k = 0;
   	cin >> n ;
   	int zarrh[n], zarra[n];
   	for(int i=0; i<n; i++)
   		cin >> zarrh[i] >> zarra[i];

   	for (int i = 0; i < n; ++i)
   	{
   		for (int j=0; j < n; j++)
   			k += (zarra[j] == zarrh[i]) ? 1 : 0;
   		
   	}
   	cout<<k;

   
	return 0;
}
