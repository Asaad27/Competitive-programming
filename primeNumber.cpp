
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	if (n < 2)
		return false;
	else if ((n&1) == 0)
		return (n == 2);
	for (int i = 3; i <= n/2; ++i)
		{
			if (n%i == 0)
				return false;
		}
		return true;
}

int main()
{
	
    int n, i = 2;
    cin >> n;
    
    while (i <= n)
    {
		
		if (isPrime(i)==true)
				printf("%d ",i );	
		i++;
    }
    

	return 0;
}

