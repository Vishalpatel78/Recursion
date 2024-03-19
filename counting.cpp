#include<iostream>
using namespace std;

int counting_increasing(int n){
    if(n==0) return 0;
    counting_increasing(n-1);
    cout<<n<<endl;
}
int counting_decreasing(int n){
    if(n==0) return 0 ;
    cout<<n<<endl;
    counting_decreasing(n-1);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"printing counting in increamenting :";
    counting_increasing(n);

    cout<<"printing counting in decreamenting :";
    counting_decreasing(n);

    
}