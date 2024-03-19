#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int start , int end , int target){
    // find mid 
    int mid = (start + end )/2;

    // base casef 1
    if(start >end) return 0;

    // base case 2
    if(arr[mid] == target ) return mid;

    // condition case1
    if(arr[mid] < target ){
        return binarySearch(arr, mid +1, end, target);
        
    }
    else{
        return binarySearch(arr, start, mid-1, target);
        
    }
}

int main()
{
    vector<int> v{1,2,3,4,5,6};
    int n =  v.size();
    int s = 0;
    int e = n-1;
    int key = 4;
    int ans = binarySearch(v, s, e, key);
    if(ans){
        cout<<"key is present in index number:" <<ans<<endl;
    }
    else{
        cout<<"key is not present";
    }
}