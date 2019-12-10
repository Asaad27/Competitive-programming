
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    int n, m;
    cin>>n>>m;

    int arr[m], post[n], k;


    for (int j=0; j < m; j++)
    {
    	int temp;
    	cin>>temp;
    	arr[j] = temp;
    }


    for (int i = 0; i < n; ++i)
    {
    	post[i] = i;
    }

    for (int j=0; j < n; j++)
    {
    	cout<<post[j]<<" ";
    }

    for (int j=0; j < m; j++)
    {
    	if (arr[j] != post[0])
    	{

    		k = post[arr[j] ];
    		post[arr[j]] = post[arr[j]-1];
    		post[arr[j]-1] = k; 
    	}
    }

    for (int j=0; j < n; j++)
    {
    	cout<<post[j]<<" ";
    }
    
    




    
	return 0;
}

