#include<iostream>
using namespace std;
  

int returnValue(int arr[]){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
     }
    return arr[0];
}
int main(){
 int arr[]={2,2,2,2,2};

 int ans=returnValue(arr);

 cout<<"the duplicate number is :"<<ans;
    return 0;
}