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
	
   set<pair<int,int>> myset;

   int n;
   cin>>n;

   for (int i = 0; i < n; ++i)
   {
       int temp;
       cin>>temp;
       myset.insert(make_pair(temp,i+1));
   }

   for (auto element :myset )
    {
       cout<<element.second<<" ";
    }
     


	return 0;
}

