#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
	if(b==0) return a;

	return gcd(b, a%b);
}

//to leftrotate array by d spaces using gcd number of sets
void leftRotate(int arr[], int d, int n){
	d = d%n;
	int GCD = gcd(d,n);

	for(int i=0;i<GCD;i++){
		int temp = arr[i];
		int j = i;

		while(1){
			int k = j+d;
			if(k>=n)
				k = k-n;
			if(k==i)
				break;

			arr[j] = arr[k];
			j = k;
			
		}
		arr[j] = temp;
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
	
	int n, d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	leftRotate(arr, d, n);

	return 0;
}