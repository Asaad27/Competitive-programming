
#include <bits/stdc++.h>

using namespace std;

int main()
{
	

    int n, k, rem, pbs = 0, i = 0;

    cin>>n>>k;

    rem = 60*4 - k;
    while(pbs <= rem && i <= n)
    	pbs += ++i*5;
    i--;
    
    cout<<i<<endl;

    

	return 0;
}

