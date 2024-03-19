#include<iostream>
#include<vector>
using namespace std;

bool check_sorted(vector<int>&arr, int n, int i){
    if(i == n-1)return true;//base case

    //1 problem solve kro
    if(arr[i+1] <arr[i] ){
        return false;
    }

    return check_sorted(arr,n,i+1);



}

int main(){
    vector<int> v{10,20,30,40,50};
    int i = 0;
    int n = v.size();

    bool b = check_sorted(v,n,i);

    if(b){
        cout<<"Array is sorted:"<<endl;
    }
    else{
        cout<<"Array is not sorted:"<<endl;
    }
}