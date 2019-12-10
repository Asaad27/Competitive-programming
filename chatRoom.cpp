
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int j = 0;
    string word, hello ="hello";
    cin >> word;


    for (int i = 0; i < word.size() ; ++i)
    {
    	if (word[i] == hello[j])
    		j++;
    	if (j > 4)
    		break;
    }

    printf((j > 4) ? "YES" : "NO");


	return 0;
}

