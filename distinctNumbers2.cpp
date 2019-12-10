#include <bits/stdc++.h>
#include <chrono> 
using namespace std::chrono; 

using namespace std;

int main() {
  auto start = high_resolution_clock::now();
  int n, s = 1;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
    cin >> a[i];
  sort(a.begin(), a.end());
  for (int i = 1; i < n; i++)
    if (a[i] != a[i - 1]) s++;
  cout << s <<endl;
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start); 
  cout << duration.count() << endl; 
}
