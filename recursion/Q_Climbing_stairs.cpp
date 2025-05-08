#include<iostream>
using namespace std;
int climbStairs(int n){
// base condition
   if(n==0|| n==1) return 1;
   return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int ans= climbStairs(n);
    cout<<"Total number of ways to reach "<<n<<"th stairs is : "<<ans;
}