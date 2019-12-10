
#include <bits/stdc++.h>

#define all(container) container.begin(), container.end()
#define csize(container) int(container.size())
const int MAXN = 1e5 + 5;

using namespace std;

int main()
{
	
   	vector<int> arr1,arr2,arr3;

   	int n, size1=0, size2=0, size3=0, i=0;
   	scanf("%d ", &n);

   	while(i < n)
   	{
   		int temp;
   		scanf("%d ", &temp);
   		if (temp == 1)
   		{
   			size1++;
   			arr1.push_back(i+1);
   		}
   		else if (temp == 2)
   		{
   			size2++;
   			arr2.push_back(i+1);
   		}
   		else
   		{
   			size3++;
   			arr3.push_back(i+1);
   		}
   		i++;
   	}
   	i = 0;
   	int m = min(size1, min(size2, size3));
   	if (!m)
   	{
   		cout<<"0";
   		return 0;
   	}
   	cout<<m<<endl;
   	while(i < m)
   	{
   		cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<"\n";
   		i++;
   	}


	return 0;
}

