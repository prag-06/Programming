#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif    
    
    int m,n;
    cin>>n;
    bool primes[n+1];
    
    for(int i=1;i<n+1;i++){
        primes[i] = true;
    }
    primes[1] = false;

    for(int i=2;i*i<=n;i++){
        if(primes[i] == true){
            for(int j=i; j*i<=n; j++){
                primes[i*j] = false;
            }
        }
    }
    for(int i=1; i<n+1; i++){
        if(primes[i] == true){
            cout<<i<<endl;
        }
    }

    return 0;
}

//Sieve with Smallest Prime Factors(SPF) array
/* int n = pow(10,6);
    int spf[n+1];
    int primes[n+1];
    for(int i=1;i<n+1;i++){
        spf[i] = -1;
        primes[i] = 1;
    }
    primes[1]  = 0;
    for(int i=2; i*i<=n; i++){
        if(primes[i] == 1){
            for(int j=i;j*i<=n;j++){
                if(primes[i*j] == 1){
                    spf[i*j] = i;
                    primes[i*j] = 0;
                }
            }
        }
    }
    */