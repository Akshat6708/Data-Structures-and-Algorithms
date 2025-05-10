#include<iostream>
#include<vector>
using namespace std;

bool CheckSorted(vector<int>&arr, int &n , int i){
//   base case
  if(i==n-1) return true;

  // 1 case solve ker do 
    if(arr[i]>arr[i+1]){
        return false;
    }
  // baki recursion sambhal lega
  CheckSorted(arr, n, i+1);
}
int main(){
    vector<int > arr{10,11,11,11,10};
    int n= arr.size();
    int i=0;
    bool isSorted= CheckSorted(arr, n, i);
    if(isSorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}