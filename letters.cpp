
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    long long n, m;
    cin>>n>>m;

    long long arr[n+1] = {0}, b[m];
    for (long long i = 1; i <= n; ++i)
    {
    	long long temp;
    	cin>>temp;
    	arr[i] = temp + arr[i-1];
    }
    
    for (long long j=0; j < m; j++)
    	cin>>b[j];
    
    long long x, i = 0, j = 1;
    while(i < m && j <= n)
    {
    	x = b[i];
    	if(x <= arr[j])
    	{	
    		i++;
            cout<< j <<" "<< x - arr[j-1] <<endl;
    	}
    	else
    		j++;
    }
	return 0;
}

