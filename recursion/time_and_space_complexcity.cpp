#include<iostream>
using namespace std;
// void fun(int arr[], int n){
//     if(n==0) return ;
//         cout<<*arr<<endl;
//         fun(arr+1,n-1);
// } 

int factorial(int n){
    if(n==1) return 1;
    int ans= n*factorial(n-1);
   
    return ans;
}

int main(){
    // int arr[]={1,2,3,4,5,6};
    // int n=6;
    // fun(arr,n);
    int n=5;
    int ans=factorial(n);
    cout<<ans<<endl;
    
}