#include <iostream>	

using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin >> testcases;
	
	while (testcases--)
	{
			int n;
			cin>>n;

			if (n%6==0)
				cout<<"Misha";
			else
				cout<<"Chef";
			cout<<endl;
	}


	return 0;
}
