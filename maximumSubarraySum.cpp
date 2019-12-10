
#include <bits/stdc++.h>

using namespace std;


int main()
{
	 
	long long n, sum, best;
	cin >> n;
	long long array[n];
	for (long long i = 0; i < n; ++i)
		cin>>array[i];
	unordered_set<long long> subsum; //faster than set

	for (int i = 0; i < n; ++i)
	{
		for (int j=i; j < n; j++)
		{
		    if (i==j)
		    {
		        sum = array[i];
		        best = sum;
		        subsum.insert(best);
		    }
		    else
		    {
		        sum = max(array[j],sum+array[j]);
		        best = max(best,sum);
			    subsum.insert(best);
		    }
		}
		
	}


	sum = 0;
	for (auto element :subsum)
		sum += element;
	cout<<sum;

	return 0;
}
