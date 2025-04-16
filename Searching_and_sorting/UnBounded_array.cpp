#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

  
//   search in unbounded array

//     method - 1. -->
//       brute force method

// int main(){
//     vector<int > arr{1,2,3,4,5,8,10,13,15,16,19,20,30,50,60};
//     int x=30;
//     int i=0;
//     int ans=-1;
//     while(1){
//         if(arr[i]>x){
//             break;
//         }
//         if(arr[i]==x){
//             ans=i;
//         }
//         i++;
//     }
   
//     cout<<"target "<<x<<" is found on index "<<ans;
// }

//   method - 2--> 
//    binary search in unbounded array



int bs(vector<int> arr,int start,int end,int x){
   int  mid=start+(end-start)/2;
   while(start<=end){
    if(arr[mid]==x){
        return mid;
    }
    else if(x>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
   }
   return -1;

}

int expoSearch(vector<int> arr, int x){
  int i=0;
  int j=1;
  while(arr[j]<x){
    i=j;
    j=j*2;
  }
  return bs(arr,i,j,x);
}
int main(){
    vector<int > arr{1,2,3,4,5,8,10,13,15,16,19,20,30,50,60};
    int x=2;
    int ans=expoSearch(arr,x);
    cout<<"target "<<x<<" is found on index "<<ans;
}





