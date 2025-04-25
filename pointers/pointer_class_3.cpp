#include<iostream>
using namespace std;

int solve(int*arr, int size){
    // int*arr is a pointer that point the values of arr array
    // cout<<"size of array inside a function : "<<sizeof(arr)<<endl;
    *arr=*arr+1;

}
int main(){
    int arr[]={10,2,3,4,5};
    // cout<<"size of array is : "<<sizeof(arr)<<endl;
    // solve(arr,5);
    solve(arr ,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
   
}
   