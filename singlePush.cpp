
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    int testcases;
    cin >> testcases;
    
    while (testcases--)
    {
    		int n, r, l, k, flag=1;
    		cin >> n ;
    		int a[n], b[n];
    		for (int i = 0; i < n; ++i)
    		{
    			cin >> a[i] ; 
    		}

    		for (int i = 0; i < n; ++i)
    		{
    			cin >> b[i] ; 
    		}

    		int i =0;
    		while(a[i] == b[i] && i < n)
    			i++;

    		if (i < n)
    		{
   				k = b[i] - a[i];
   				if (k < 0 )
   				{
   					flag = 0;    					
    			}	
    		}

    		while (a[i] != b[i] && i < n)
    		{
    			if (b[i] - a[i] != k )
    			{
    				flag = 0;
    				break;
    			}
    			i++;
    		}

    		while (i < n)
    		{
    			if (a[i] != b[i])
    			{
    					flag = 0;
    					break;
    			}
    			i++;
    		}
    		if (flag)
    			cout<<"YES"<<endl;
    		else
    			cout << "NO"<<endl;

    		}



   
    

	return 0;
}

