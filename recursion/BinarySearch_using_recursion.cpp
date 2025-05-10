#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int > &arr, int s, int e ,int &target){
    int mid=s+(e-s)/2;
    // base case 
    // 1.-> key not found
    if(s>e) return -1;
    // 2.-> key is found 
    if(arr[mid]==target){
        return mid;
    }

    // arr[mid]<target => right me search
    if(arr[mid]<target){
      return binarySearch(arr, mid+1, e, target);
    }

    // arr[mid]>target => left me search 
    else{
        return binarySearch(arr, s, mid-1, target);
    }
}
int main(){
    vector<int > arr{10,30,40,50,60,90};
    int target = 10;
    int s =0;
    int e= arr.size()-1;
    int ans = binarySearch(arr, s, e, target);
    cout<<"target is found at index : "<<ans;
}