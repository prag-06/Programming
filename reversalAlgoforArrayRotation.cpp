#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n){
	d = d%n;
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
	reverseArray(arr, 0, n-1);

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
	
	int n, d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	leftRotate(arr, d, n);

	return 0;
}