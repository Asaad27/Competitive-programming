
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    long long n, cost=0,k=0, d=0, turncost=0;
    cin >> n ;

    for (int i = 0; i < n; ++i)
    {
    	cin >> k;

    	cost += (d > k)? d-k :0;
    	d = max(d,k);
    }

    cout<<cost;

	return 0;
}

