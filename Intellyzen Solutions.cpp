#include <bits/stdc++.h> 
using namespace std; 
int minimumCost(long long arr[], int n);
int main() 
{ 
	int t;
	cin>>t;
	for(int m=0;m<t;m++){
	int n;
	cin>>n;
	long long  arr[n];
	for(int z=0;z<n;z++){
		cin>>arr[z];
	}
	cout << minimumCost(arr, n) <<endl; 
}
	return 0; 
} 
int minimumCost(long long arr[], int n) 
{ 
	sort(arr, arr + n); 
	long long tcost = 0; 
	for (int i = n - 1; i > 1; i -= 2) { 
		if (i == 2) { 
			tcost = tcost + arr[2] + arr[0]; 
		} 
		else { 
			long long algo1 = arr[i] + arr[0] + 2 * arr[1]; 
			long long algo2 = arr[i] + arr[i - 1] + 2 * arr[0]; 
			tcost += min(algo1, algo2); 
		} 
	} 

	if (n == 1) { 
		tcost = tcost + arr[0]; 
	} 
	else { 
		tcost = tcost + arr[1]; 
	} 
	return tcost; 
} 

