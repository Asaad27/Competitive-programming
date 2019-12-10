#include<bits/stdc++.h>

using namespace std;

int main()

{

	int n,x;
	cin>>n;
	vector< pair<int,int>> v;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(make_pair(x,i));
	}

	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].second<<" ";
	}

	cout<<endl;
	return 0;
	
}