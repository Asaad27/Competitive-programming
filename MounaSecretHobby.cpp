#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n, k, maxi = 0, cnt = 0;
	cin>>n>>k;

	vector<int> arr(n);
	vector<int> ::iterator it, jt;
	for (int j=0; j < n; j++)
		cin>>arr[j];
	
	sort(arr.begin(), arr.end());
	it = arr.begin(); jt =it;
	while(jt != arr.end())
	{
		if (*jt <= *it + k)
		{	
			cnt++;
			maxi = max(maxi, cnt);	
		}
		else
		{
			it = lower_bound(it, arr.end(), *jt-k);
			jt = it;
			cnt = 0;
			continue;
		}
		jt++;
	}
	cout<<maxi;
}




