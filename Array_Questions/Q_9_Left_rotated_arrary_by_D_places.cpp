#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int d;
//     cout<<"enter the value of d : ";
//     cin>>d;
  
//     vector<int > arr{1,2,3,4,5,6};
//     int n= arr.size();
//       d=d%n;
//     int temp[d];
//     // store the value in the temp arr
//     for(int i=0; i<d; i++){
//        temp[i]=arr[i];
//     }

//     // now place the remainig element by d place

//     for(int i=d; i<n; i++){
//       arr[i-d]=arr[i];
//     }
//   // now push the value temp to arr

//   for(int i=n-d; i<n;i++){
//     arr[i]=temp[i-(n-d)];
//   }

//   for(auto i:arr){
//     cout<<i<<" ";
//   }
//     }




int main(){
    vector<int > nums{1,2,3,4,5};
    vector<string>ans;
    for(int i=0 ; i<nums.size(); i++){
        string s=to_string(nums[i]);
        ans.push_back(s);
    }
    for(auto i:ans){
                cout<<i<<" ";
    }
}