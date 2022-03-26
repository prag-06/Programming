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
    // O(log(max(a,b))) complexity
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
    
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<ans;

    return 0;
}