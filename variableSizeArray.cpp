#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.in", "w", stdout);
#endif	
	
	int n, q;
	vector<vector<int>> a;
	vector<int> temp;
	cin>>n>>q;
	int num;
	for(int index=0;index<n;index++){
        while(cin>>num){
            temp.push_back(num);
            if(cin.get() == '\n') break;
        }
        a.push_back(temp);
        temp.clear();
    }
    int i,j;
    for(int index=0; index<q; index++){
    	cin>>i>>j;
    	cout<<a[i][j]<<endl;
    }

    // for(int i=0;i<n;i++){
    // 	for(int j=0; j<a[i].size(); j++){
    // 		cout<<a[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }  

	return 0;
}