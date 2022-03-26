#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif	
	
	int n;
	cin>>n;
	string a[n];
	int count[n] = {0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=n-1;i>=0;i--)
	{
		for(int j=i;j>=0;j--)
		{
			if(a[i]>a[j])
			{
				count[i]++;
			}

		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<count[i]<<endl;
	}

	return 0;
}