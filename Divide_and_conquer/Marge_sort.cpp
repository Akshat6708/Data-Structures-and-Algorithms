#include<iostream>
#include<vector>
using namespace std;

// void marge(int *arr, int s, int e){
//     int mid= (s+e)/2;
//     // break down into a two part of a arr (left and Right)
//     int len1=mid-s+1;
//     int len2=e-mid;
//     // now creat left of right part arr (dyamamic)
//     int *left=new int [len1];
//     int *right=new int [len2];

//   //now copys value
//   int k=s;
//   for(int i=0; i<len1;i++){
//     left[i]=arr[k];
//     k++;
//   }
//   k=mid+1;
//   for(int i=0; i<len2; i++){
//     right[i]=arr[k];
//     k++;
//   }

//   //  marge both arr (left and right part )

//   int leftIndex=0;
//   int RightIndex=0;
//   int mainIndex=s;
//   while(leftIndex<len1&& RightIndex<len2){
//     if(left[leftIndex]<right[RightIndex]){
       
//        // arr[mainIndex]=left[leftIndex];
//        //  mainIndex++;  
//        // leftIndex++
//          //   or    (both are same )
//         arr[mainIndex++]=left[leftIndex++];   // use then increment the value
//     }
//     else{
//         arr[mainIndex++]=right[RightIndex++];
//     }
//   }

//   // now copy remaning element 
//   // for left part
//   while(leftIndex<len1){
//     arr[mainIndex++]=left[leftIndex++];
//   }
//   // for right part 
//    while(RightIndex<len2){
//     arr[mainIndex++]=right[RightIndex++];
//   }
// }

// void margeSort(int *arr, int s ,int e){
//     // base case 
//     // s==e => single element 
//     // s > e -> invalid array
//     if(s>=e)  return ;
//     int mid=(s+e)/2;
//     // left part solve kerdo recursion 
//     margeSort(arr, s,mid);

//     // right part solve kerdo recursion
//     margeSort(arr, mid+1, e);

//     //  now marge 2 sorted array
//     marge(arr, s ,e);

//     // TODO : delete left and right wala newly array
// }
// int main(){
//     int arr[]={4,5,2,2,13,2,12,1,1,1};
//     int n=10;
//     int s=0;
//     int e=n-1;
//     cout<<"befor sort : ";
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     margeSort(arr, s,e);
//     cout<<endl<<"after sort : ";
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

void marge(int* arr , int s, int e){
  int mid= (s+e)/2;
  // create left and right array
  int len1=mid-s+1;
  int len2=e-mid;
  // dymamic creation of a array
  int* left=new int[len1];
  int* right=new int[len2];
  // now copy values
  int k=s;
  for(int i=0; i<len1; i++){
     left[i]=arr[k];
     k++;
  }
  k=mid+1;
  for(int i=0; i<len2; i++){
     right[i]=arr[k];
     k++;
  }
  // now sort both array (left and right part)

  int leftIndex=0;
  int RightIndex=0;
  int mainArrIndex=s;
  while(leftIndex<len1 && RightIndex<len2){
    if(left[leftIndex]<right[RightIndex]){
      arr[mainArrIndex++]=left[leftIndex++];
    }
    else{
       arr[mainArrIndex++]=right[RightIndex++];
    }
  }
  // now copy remeaning element
  while(leftIndex<len1){
      arr[mainArrIndex++]=left[leftIndex++];
  }
  while(RightIndex<len2){
      arr[mainArrIndex++]=right[RightIndex++];
  }
}
void margeSort(int* arr, int s, int e){
  // base case 
  if(s>=e) return ;
  int mid=(s+e)/2;
  // recursion solve left part
  margeSort(arr, s, mid);
  // recursion solve right part
  margeSort(arr, mid+1, e);
  // marge both part
  marge(arr, s, e);
}

int main(){
  int arr[]={1,5,3,9,3,2,7};
  int n=7;
  int s =0;
  int e=n-1;
  margeSort(arr,s,e);
  for(auto i: arr){
    cout<<i<<" ";
  }

}