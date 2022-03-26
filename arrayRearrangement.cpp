#include<bits/stdc++.h>
using namespace std;

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

    for(int i=0;i<n;i++){
        if(arr[i] >= 0){
            int index = arr[i], val = i;
            while(index != i){
                int temp = arr[index];
                arr[index] = -1*(val+1);
                val = index;
                index = temp;
            }
            arr[index] = -1*(val+1);
        }
    }

    for(int i=0;i<n;i++){
        arr[i] = -1*(arr[i])-1;
        cout<<arr[i]<<" ";
    }

    return 0;
}