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
	
    string s, t;
    cin>>s>>t;

    int i=0, j=0;

    while(j < zsize(t))
    {

    	if (t[j] == s[i])
    		i++;
    	j++;
    }
    
    cout<<i+1<<endl;

	return 0;
}

