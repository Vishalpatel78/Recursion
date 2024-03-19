/* there is a rod with the length of n and there are 3 perameter to cut it x, y, z 
now cut the rod with maximum value of x , y, z 

example     n = 7
            x = 5
            y = 2
            z = 2
            
        now we can cut it maximum size with the help of x that is 5 and y that is 2
*/

#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n, int x, int y, int z){
    //base case : if the length of the given rod is 0 then 
    if(n==0)return 0;

    // base case2: if there is no way to cut the rod 
    if(n<0) return INT_MIN;

    int ans1 = solve(n-x, x, y, z) +1;
    int ans2 = solve(n-y, x, y, z)+1;
    int ans3 = solve(n-z, x, y, z)+1;

    int ans = max(ans1,max(ans2,ans3));
    return ans ;
}

int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    int ans = solve(n,x,y,z);
    if(ans<0)
        return 0;
    cout<<"Answer is :"<<ans<<endl;
}