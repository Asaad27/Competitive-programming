//slower
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    
    while (testcases--)
    {
    		int n;
    		cin >> n;
    		int arr[n];

    	for (int j=0; j < n; j++)
    		arr[j] = j+1; 
		while( next_permutation(arr, arr+n) )
		{
			bool goodPermutation = true;
			for (int i = 0; i < n; ++i)
				goodPermutation &= arr[i] != i+1;

			if (goodPermutation)
			{
				for (int j=0; j < n; j++)
					printf("%d ",arr[j] );
				printf("\n");
				break;
			}
		}
    }
    
	return 0;
}

