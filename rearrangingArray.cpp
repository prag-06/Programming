#include<bits/stdc++.h>
using namespace std;

void fixArray(int arr[], int n){
	for(int i=0; i<n;){
		if(arr[i]>=0 && arr[i]!=i){
			int temp = arr[arr[i]];
			arr[arr[i]] = arr[i];
			arr[i] = temp;
		}

		else{
			i++;
		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.in", "w", stdout);
#endif	
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	fixArray(arr, n);

	return 0;
}