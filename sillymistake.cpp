
#include <bits/stdc++.h>

using namespace std;

int main()
{
	short dparray[1000050]={0};
    int n, i=0, positivNbrs=0, negativNbrs=0;
    cin >> n;
    long a[n];
    vector<int> v;
    stack<int> employees;

    for (int i = 0; i < n; ++i)
    	cin >> a[i];
   
    

    if ((n&2)==1)
    {
    	cout<<"-1";
    	return 0;
    }

    while (i < n)
    {
        
    	if (a[i]>0 && dparray[a[i]] == 0)
    	{
    		dparray[a[i]] = 1;
    		positivNbrs++;
            employees.push(a[i]);
    	}
    	else if (a[i]<0 && dparray[-a[i]] == 0 || (a[i]>0 && dparray[a[i]] == 1) ||a[i]<0 && dparray[-a[i]] == 2  )
    	{
                
    	    	cout<<"-1";
    			  return 0;		
    	}
    	else if(a[i]<0 && dparray[-a[i]] == 1)
    	{
            dparray[-a[i]] = 2; 
    		negativNbrs++;
    	}
        
   		if (positivNbrs == negativNbrs)
   		{
            
   			v.push_back(positivNbrs+negativNbrs);
   			positivNbrs = 0;
   			negativNbrs = 0;
   			while(!employees.empty())
            {
                dparray[employees.top()] = 0 ;
                employees.pop(); 
            }
            
   		}
   		i++;
    }
    
    if (positivNbrs != negativNbrs)
    {
    	   cout<<"-1";
    	  return 0;	
    }
    cout << v.size()<<endl;
    
    for (auto element :v )
    {

    	cout << element<<" ";
    }

	return 0;
}

