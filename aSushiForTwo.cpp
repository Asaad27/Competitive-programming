
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];	

    int i = 0, lenght = 1, ans = 0 , m=0, answer =0 ;

    while(i < n-1)
    {
        if (arr[i] == arr[i+1])
            lenght++;
        else 
        {
            ans = lenght  ;
            lenght = 1;
            
        }
        m = min(ans, lenght) ;
        answer = max(m, answer);
        i++;
    } 

    printf("%d",2*answer);
    return 0;
   
}