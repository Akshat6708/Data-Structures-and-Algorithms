#include<iostream>
#include<vector>
using namespace std;

// int FindPivotElement(vector<int>arr){
//     int start=0;
//     int end=arr.size()-1;
//     int mid=start+(end-start)/2;
//   while(start<end){
//     if(arr[mid]>=arr[0]){
//         start=mid+1;
//     }
//     else{
//         end=mid;
//     }
//      mid=start+(end-start)/2;
//   }
//   return arr[start];
// }

// int main(){
//  vector<int >arr{6,7,8,9,1,2,3};
//   int ans=FindPivotElement(arr);
//   cout<<"pivot element is : "<<ans;


//   return 0;
// }






int SearchElement(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
  while(start<end){
    if(arr[mid]==target){
        return mid;
    }
   else if(arr[mid]>target){
        start=mid+1;
    }
    else{
        end=mid;
    }
     mid=start+(end-start)/2;
  }
  return arr[start];
}

int main(){
 vector<int >arr{6,7,8,9,1,2,3};
 int target=3;
  int ans=SearchElement(arr,target);
  cout<<"target is an: "<<ans<<" index";


  return 0;
}