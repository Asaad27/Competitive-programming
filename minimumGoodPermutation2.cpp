//faster
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    
    while (testcases--)
    {
    	int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        	a[i]=i+1;
        for(int i=0; i<n; i+=2)
        {
            if(i+2 <= n)
            	swap(a[i], a[i+1]);
            if(i+1 == n)
            	swap(a[i], a[i-1]);
        }
        for(int i=0; i<n; i++)
        	cout<<a[i]<<" ";
        cout<<endl;
    }
    
	return 0;
}

