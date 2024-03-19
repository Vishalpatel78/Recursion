#include<iostream>
using namespace std;

int fibonachi(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int ans =  fibonachi(n-1) + fibonachi(n-2);
    return ans;
    
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int ans = fibonachi(n);
    cout<<ans<<endl;
}