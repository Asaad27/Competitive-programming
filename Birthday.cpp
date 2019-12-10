
#include<bits/stdc++.h>
    
using namespace std;

int main()
{
	long long n,i,j,a[105];

    cin>>n;
    for(i=0;i<n;i++) 
    	cin>>a[i];
    sort(a,a+n);

    for(i=0;i<n;i+=2) 
    	cout<<a[i]<<" ";
    for(i=((n&1)? n-2:n-1);i>0;i-=2) 
    	cout<<a[i]<<" ";
}