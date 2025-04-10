#include<iostream>
#include<vector>
using namespace std;

//  sort 0's 1's and 2's in array

//  method  1. ->

// int main(){
// int n;
// cout<<"Enter the size of array : ";
// cin>>n;
// vector<int>nums(n);
// int zeros=0;
// int ones=0;
// int twos=0;
// vector<int>arr;
// cout<<"enter the values of an array : "<<endl;
// for(int i=0;i<nums.size();i++){
//     cin>>nums[i];
// }
// for (int i=0;i<nums.size();i++){
//     if(nums[i]==0){
//         zeros++;
//     }
//     if(nums[i]==1){
//         ones++;
//     }
//     if(nums[i]==2){
//         twos++;
//     }

// }


// for(int i=0;i<zeros;i++){
    
//    arr.push_back(0);
// }
// for(int i=0;i<ones;i++){
   
//     arr.push_back(1);
//  }
//  for(int i=0;i<twos;i++){
   
//     arr.push_back(2);
//  }
// cout<<"The sorted array is :";
//  for(int i=0;i<nums.size();i++){
//    cout<<arr[i]<<" ";
//  }

// }



//    method  2. =>  (Best)

// int main(){
//     int n;        
// cout<<"Enter the size of array : ";
// cin>>n;
// vector<int>nums(n);
// cout<<"enter the values of an array : "<<endl;
// for(int i=0;i<nums.size();i++){
//     cin>>nums[i];

// }
// int low=0;
// int mid=0;
// int high=nums.size()-1;
// while(mid<=high){
//     if(nums[mid]==0){
//         swap(nums[mid],nums[low]);
//         mid++;
//         low++;

//     }
//     else if(nums[mid]==1){
//         mid++;
//     }
//     else{
//         swap(nums[mid],nums[high]);
//         high--;
//     }
    
// }
// cout<<"the sorted array is :";
// for(int i=0;i<nums.size();i++){
//     cout<<nums[i]<<" ";
// }
// }
