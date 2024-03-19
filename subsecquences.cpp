#include<iostream>
using namespace std;

void subsecquences(string str, string output, int i){
    // base case
    if(i>= str.length()){
        cout<< output<<endl;
        return;
    }

    // exclude 
    subsecquences(str, output,i+1);

    // include 
    output.push_back(str[i]);
    subsecquences(str, output,i+1);
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;

    subsecquences(str,output,i);
}