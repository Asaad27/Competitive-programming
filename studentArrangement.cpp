
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    int n, m, k;
    cin>>n>>m>>k;

    set<int> rows; 
    set<int>::iterator it;
    
    for (int j=1; j <= m; j++)
		rows.insert(j);    
    
    int arr[n];
    for (int i = 0; i < n; ++i)
    	cin>>arr[i];

    int rowCapacity[n+1] = {0}, sum = 0;

    for (int i = 0; i < n; ++i)
    {
    	int temp = arr[i];
    	it = rows.lower_bound(temp);

    	if (it == rows.end())
    		it = rows.begin();

    	sum += (*it != temp)? 1:0;
    	rowCapacity[(*it)]++;

  		if (rowCapacity[*it] == k)
  			rows.erase(*it);
    }

    cout<<sum;


	return 0;
}

