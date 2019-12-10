
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	cin>>n;
	while(n--)
	{
    	long long c, m, x;
    	cin>>c>>m>>x;
    	x += max(c,m) - min(c,m);
    	if (c>m)
    		c -= max(c,m) - min(c,m);
    	else
    		m -= max(c,m) - min(c,m);
    	long long temp = min(c,m);
    	long long mini = min(temp, x);
    	c -= mini;
    	m -= mini;
    	x -= mini;
    	mini += (c+m)/3;

    	cout<<mini<<endl;
    }
	return 0;
}

