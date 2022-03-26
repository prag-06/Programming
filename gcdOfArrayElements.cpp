#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int m = min(a,b);
    int n = max(a,b);
    if(m==0){
        return n;
    }

    if(n%m == 0){
        return m;
    }
    // int temp = n%m;
    while(n%m != 0){
        // if(temp == 0) {break;}
        int temp = n;
        n = m;
        m = temp%m;        
    }
    int ans = m;
    return ans;
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
    int ans = gcd(arr[0], arr[1]);
    // O(m*log(max(arr[n])))
    for(int i=2;i<n;i++){
        ans = gcd(ans, arr[i]);
    }

    cout<<ans;

    return 0;
}