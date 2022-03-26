#include<bits/stdc++.h>
using namespace std;

int maxGap(vector<int> &nums){
    int n = nums.size();
    if(n<2) return 0;

    int maxNum = INT_MIN, minNum = INT_MAX;

    for(int i=0;i<n;i++){
        maxNum = max(maxNum, nums[i]);
        minNum = min(minNum, nums[i]);
    }
    // cout<<maxNum<<" "<<minNum<<endl;
    if(minNum == maxNum) return 0;

    int gap = ceil((maxNum - minNum)/(n-1));
    // cout<<gap<<endl;

    int minArr[n] , maxArr[n];
    for(int i=0; i<n; i++){
        minArr[i] = INT_MAX;
        maxArr[i] = INT_MIN;
    }
    for(int i=0; i<n; i++){
        int bucket = (nums[i] - minNum)/gap;
        minArr[bucket] = min(minArr[bucket], nums[i]);
        maxArr[bucket] = max(maxArr[bucket], nums[i]);
    }

    int ans = INT_MIN;
    int prev = INT_MIN;

    for(int i=0; i<n; i++){
        if(minArr[i] == INT_MAX) continue;

        if(prev == INT_MIN){
            prev = maxArr[i];
        }

        else{
            ans = max(ans, minArr[i] - prev);
            // cout<<ans<<endl;
            prev = maxArr[i];
        }
    }

    return ans;


}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif    
    
    vector<int> nums;
    int temp;
    while(cin>>temp){
        nums.push_back(temp);
    }
    

    cout<<maxGap(nums);

    return 0;
}