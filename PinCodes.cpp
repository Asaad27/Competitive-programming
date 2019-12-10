
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);


    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n;
        cin>>n;
        vector<string> arr(n);

        int count = 0;

        for (int j=0; j < n; j++)
            cin>>arr[j];



        for (int j=0; j < n; j++)
   		{
            int flag = 0, notChanged = 1;
            do{
                notChanged = 1;
                for (int i = 0; i < n; i++ )
                {
                    if (i==j)
                        continue;
                    if (arr[j].compare(arr[i]) == 0)
                    {
                        arr[j][0] = 48 + (arr[j][0]-'0'+1)%10;
                        flag = 1;
                        notChanged = 0;
                    }
                }
            }while(!notChanged);


            if (flag == 1)
                count++;
        }

         cout<<count<<"\n";
         for (auto element :arr )
             cout<<element<<"\n";
    }




    return 0;
}

