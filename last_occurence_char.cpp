/*find the last occerence of a character in given string*/

#include<iostream>
using namespace std;

int solve(string str,char c, int i,int find){
    // int ans = 0;
    // for(int i=0; i<str.length(); i++){
    //     if(str[i]==c){
    //         ans = i;
    //         break;//for first occurrence
    //     }
    // }
    // return ans ;


   // NOW using recursion

   if(i>=str.length())
    return find;

    //solve one case
    if(str[i] == c){
        find = i;
    }
    solve(str, c, i+1, find);

   
}

int main(){
    string str = "abcdedfg";
    char c = 'd';
    int i = 0;
    int find = 0;
    int ans = solve(str,c,i,find);
    cout<<"last occurence of character is :"<<ans<<endl;


}