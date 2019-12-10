//slower
#include <bits/stdc++.h>
#include <chrono> 
using namespace std::chrono; 


using namespace std;

int main()
{
	auto start = high_resolution_clock::now();
    int n;
    cin >> n;
    unordered_set<long> ens;

    for (int i = 0; i < n; ++i)
    	{
    		int x;
    		cin>>x;
    		ens.insert(x);
    	}
    
    cout<<ens.size()<<endl;
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start); 
cout << duration.count() << endl; 
	return 0;
}

