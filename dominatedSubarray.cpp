
#include<bits/stdc++.h>

using namespace std;
  
int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--)
   	{
    	int n, docc[1000000]={0}, temp, ans = INT_MAX;
    	cin>>n;
    	for(int i = 1 ;i <= n;i++)
    	{
    			cin>>temp;
    			if(docc[temp])
    			  ans=min(ans, i-docc[temp]+1);
    			
    			docc[temp]= i;
    	}
    	if(ans==INT_MAX)
    		ans=-1;
    	cout<<ans<<endl;
   	}
}
