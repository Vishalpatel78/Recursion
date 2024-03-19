#include<iostream>
using namespace std;

bool checkPalendrom(string str,int i, int j){
    if(i>=j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    checkPalendrom(str,i+1,j-1);
}

int main(){
    string str = "nitin";
    int i = 0;
    int j = str.size()-1;

    bool ans = checkPalendrom(str,i,j);

    if(ans){
        cout<<"palendrome";
    }
    else{
        cout<<"not pallendrom";
    }
}