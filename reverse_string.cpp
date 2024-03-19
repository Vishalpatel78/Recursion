#include<iostream>
using namespace std;

string reverse(string &str, int s, int e){
    if(s >= e){
        return str;
    }

    // solve one problem
    swap(str[s],str[e]);
    reverse(str,s+1,e-1);
}

int main(){
    string str = "vishalkurmi";
    int start =0;
    int end = str.length()-1;
    reverse(str,start,end);
    cout<<str;
}