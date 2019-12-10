
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    int n, m, k, sum = 0;
    cin>>n>>m>>k;

    vector<int> app; 
    vector<int>::iterator it;
        
    int arr[n];
    for (int i = 0; i < n; ++i)
    	cin>>arr[i];
    sort(arr, arr+n);

    for (int j=0; j < m; j++)
    {
    	int x;
    	cin>>x;
    	app.push_back(x);
    }
	sort(app.begin(), app.end());

	int i = 0, j = 0;
	while(i < n && j < m)
	{
		if (arr[i] < app[j] - k)
			i++;
		else if (arr[i] > app[j] + k)
			j++;
		else 
		{
			i++;
			j++;
			sum++;
		}
	}

    cout<<sum;
	return 0;
}

