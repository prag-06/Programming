#include<bits/stdc++.h>
using namespace std;

int m = 3;
int n = 3;

int countpaths(int i, int j){
    if(i==m-1 || j==n-1){
        return 1;
    }

    return countpaths(i,j+1)+countpaths(i+1,j);
}

int main(){
    
    int total = countpaths(0,0);
    cout<<total;

    return 0;
}