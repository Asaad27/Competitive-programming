
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    
	int n, seconds=0, m = 0;
	bool dpdistinct[(int)2e5 + 10]={false};
	int half = ((int)2e5+10) / 2;
	cin>> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;

		if (x != 0 && !dpdistinct[half + x])
		{
			seconds++;
			dpdistinct[half + x] = true;
		}
	}

	cout<<seconds;


	return 0;
}

