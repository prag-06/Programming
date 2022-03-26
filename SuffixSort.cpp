#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<string>& v)
{
	for(int i=0;i<v.size();i++)
	{
		string temp = v[i];
		int j = i;

		while(j>0 && temp<v[j-1])
		{
			v[j] = v[j-1];
			j--;
		}

		v[j] = temp;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	string s;
	int k;
	string temp = "";
	cin>>s>>k;
	int len = s.length();
	vector<string> v;

	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			temp += s[j];
		}
		v.push_back(temp);
		temp = "";
	}

	insertionSort(v);

	cout<<v[k-1];
	return 0;

}	