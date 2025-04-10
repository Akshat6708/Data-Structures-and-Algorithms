#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int BinarySearch(int arr[],int size,int target){
// int start=0;
// int end=size-1;
// int mid=start+(end-start)/2;

// while(start<=end){
//     int element=arr[mid];
//     if(target==element){
//         return mid;
//     }
//     if(target<element){
//      end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//     mid=start+(end-start)/2;
// }
// return -1;
// }

// int main(){
// int arr[]={1,3,4,5,8,9,12,15,18,20};
// int size=10;
// int target=5;
// int returnValue=BinarySearch(arr,size,target);

// if(returnValue>=0){
//     cout<<"Target is found an "<<returnValue<<" index";

// }
// else{
//     cout<<"target is not found";
// }
// return 0;
// }




// int main(){
    // apply binary stl function in vector

//     vector<int> v{1,2,3,4,5,6,7,8};
//     if( binary_search (v.begin(), v.end(), 1)){
//   cout<<"target is found";
//     }
//     else {
//         cout<<"target is not found";
//     }


 // apply binary stl function in array

// int arr[]={1,2,3,4,5,6,7,8};
// int size=8;
// if( binary_search (arr, arr+size, 40)){
// cout<<"target is found";
// }
// else {
//     cout<<"target is not found";
// }
// return 0;
// }


// int main(){
// vector<int>v{1,77,5,4,6,4364,55,35,34};
// sort(v.begin(),v.end());
// for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// return 0;
// }




// int firstocc(vector<int>nums,int target){
// int s=0;
// int e=nums.size()-1;
// int mid=s+(e-s)/2;
// int ans=-1;
// while(s<=e){
//     int element=nums[mid];
//     if(target==element){
//         ans=mid;
//         e=mid-1;
//     }
//     else if(target>element){
//         s=mid+1;
      
//     }
//     else if(target<element){
//         e=mid-1;
//     }
//     mid=s+(e-s)/2;
// }
// return ans;
// }
// int lasttocc(vector<int>nums,int target){
//     int s=0;
//     int e=nums.size()-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         int element=nums[mid];
//         if(target==element){
//             ans=mid;
//            s=mid+1;
//         }
//         else if(target>element){
//             s=mid+1;
          
//         }
//         else if(target<element){
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
//     }

   
   

// int main(){
//     vector<int>nums={1,2,3,3,3,3,5,8,9};
//     int target=10;
//   int leftocc=  firstocc(nums,target);
//   int righttocc=  lasttocc(nums,target);

//   cout<<"first occurence is an "<<leftocc<<" index"<<endl;
//   cout<<"last occurence is an "<<righttocc<<" index";
  
// }





int firstocc(vector<int>nums,int target){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int element=nums[mid];
        if(target==element){
            ans=mid;
            e=mid-1;
        }
        else if(target>element){
            s=mid+1;
          
        }
        else if(target<element){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    }
    int lasttocc(vector<int>nums,int target){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            int element=nums[mid];
            if(target==element){
                ans=mid;
               s=mid+1;
            }
            else if(target>element){
                s=mid+1;
              
            }
            else if(target<element){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        }
    
       
       
    
    int main(){
        vector<int>nums={1,2,3,3,3,3,5,5,5,5,5,8,9};
        int target=5;
      int leftocc=  firstocc(nums,target);
      int righttocc=  lasttocc(nums,target);
      int TotalNoOfOcc=(righttocc-leftocc)+1;
    cout<<"total number of occurence is :"<<TotalNoOfOcc;
      
    }  