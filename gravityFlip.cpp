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
	
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    	cin >> arr[i];

    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    	cout<<arr[i]<<" ";


	return 0;
}
