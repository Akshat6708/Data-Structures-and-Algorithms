#include<iostream>
#include<limits.h>
using namespace std;
void FindMax(int arr[], int n, int i, int& maxi){
// base condition
if(i>=n) return;
// solve first condition 
   maxi=max(maxi, arr[i]);
   FindMax(arr, n , i+1, maxi);

}
void FindMin(int arr[], int n, int i, int& mini){
    // base condition
    if(i>=n) return ;
    mini=min(mini,arr[i]);
    FindMin(arr, n, i+1,mini);
}

int main(){
   int arr[5]={1,33,535,768,4};
   int n=5;
   int i=0;
   int maxi=INT_MIN;
   int mini= INT_MAX;
   FindMax(arr, n, i ,maxi);
   FindMin(arr,n, i, mini);
   cout<<"the maximum element is : "<<maxi<<endl;
   cout<<"the minimum element is : "<<mini;

}