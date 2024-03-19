/* there is a n numbers of array and found the max of two subsecquence 
ex  n = {1,2,3,4}
    ans = 6
    
    n = {2,1,4,9}
    ans = 11
    
*/

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int solve(vector<int>&arr, int i, int &maxi, int sum){
    // base case 
    if(i>arr.size()){
        maxi = max(maxi,sum);
        return maxi;
    }
    ;

    // include the elment
    solve(arr,i+2,maxi, sum+arr[i]);

    // not include the element
    solve(arr,i+1,maxi,sum);
}

int main(){
    vector<int> arr{2,1,4,9};
    int i = 0 ;
    int maxi = INT_MIN;
    int sum = 0;
    solve(arr,i,maxi,sum);
    
    cout<<"max_sum  ="<<maxi<<endl;

}