
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
    ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int testcases;
	cin >> testcases;
	
	while (testcases--)
	{
			int tab[3], r,g,b, first, days=0;
			cin>>r>>g>>b;

			tab[0] = r;
			tab[1] = g;
			tab[2] = b;

			sort(tab, tab+3);
			first = min(tab[0], tab[2]-tab[1]);

			tab[0] -= first;
			tab[2] -= first;
			days += first;

			while(tab[0] > 0)
			{
				if (tab[0]%2 == 0)
				{
					
					tab[1] -= tab[0]/2;
					tab[2] -= tab[0]/2;
					days += tab[0];
					tab[0]=0;
				}
				else
				{
					tab[0] -=1;
					days += 1;
					tab[2]--;
				}

				
			}



			cout<< min(tab[1]+tab[0], tab[2]) + days <<"\n";
	}
	

	return 0;
}

