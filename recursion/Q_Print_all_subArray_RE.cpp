// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubArr_util(vector<int>&arr, int start, int end){
//     // base case 
//     if(end==arr.size()){
//       return;
//     }
//     // solve 1 case
//     for(int i=start; i<=end; i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // RE
//     printSubArr_util(arr, start, end+1);
// }
// void printSubArr(vector<int >&arr ){
//  for(int start=0; start<arr.size(); start++){
//     int end=start;
//     printSubArr_util(arr, start , end);
//  }
// }
// int main (){
//     vector<int >arr{1,2,3,4,5};
//     printSubArr(arr);
    
// }









#include<iostream>
#include<vector>
using namespace std;
void printSubArr_util(vector<int > &arr, int start, int end){
  // base case 
    if(end==arr.size()){
      return;
    }
  // ek case solve kero 
    for(int i=start; i<=end; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    printSubArr_util(arr, start , end+1);
}
void printSubArr(vector<int >&arr){
     for(int start =0; start<arr.size();start++){
      int end=start;
      printSubArr_util(arr, start, end);
     }
}
int main (){
    vector<int >arr{1,2,3,4,5};
    printSubArr(arr);
    
}