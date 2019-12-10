/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yetanotherdivision.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Asaad <Asaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 00:38:59 by Asaad         #+#    #+#                 */
/*   Updated: 2019/11/17 11:06:53 by Asaad        ###   ########.fr           */
/*                                                                            */
/* ************************************************************************** */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	
   int testcases;
   cin >> testcases;
   
   while (testcases--)
   {
   		int n;
   		cin >> n;

   		int arr[n];
   		bool b=true;

   		for (int i = 0; i < n; ++i)
   			cin >> arr[i];

   		sort(arr, arr+n);

   		for (int i = 1; i < n; ++i)
   			b &= arr[i]-arr[i-1] != 1;

   		cout<<2-b<<endl;
   }

   

	return 0;
}

