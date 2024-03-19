// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money
// stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems
// connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you
// can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr){
    int n = arr.size();
    int ans1 = 0;
    int ans2 = 0;
    for(int i=0; i<=n; i+=2){
        ans1 +=arr[i];
        // cout<<"for ans1 "<<arr[i]<<" ";
    }
    for(int i=1; i<=n; i+=2){
        ans2 += arr[i];
        // cout<<"for ans2 "<<arr[i]<<" ";
    }
    
    return max(ans1, ans2);
}

int main(){
    vector<int> nums{1,2,3,1};
    int ans = solve(nums);
    cout<<"ans"<<ans<<endl;
}





int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    // Initialize variables to store maximum money robbed till previous and pre-previous house
    int prePrevious = nums[0]; 
    int prev = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        // Calculate maximum money robbed till current house
        int curr = max(prev, prePrevious + nums[i]);
        
        // Update pre-previous and previous variables for the next iteration
        prePrevious = prev;
        prev = curr;
    }

    return prev;
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    int prePrevious = nums[0]; // Money robbed till two houses before the current house
    int prev = max(nums[0], nums[1]); // Money robbed till the previous house

    for (int i = 2; i < n; i++) {
        int curr = max(prev, prePrevious + nums[i]);
        prePrevious = prev;
        prev = curr;
    }

    return prev;
}