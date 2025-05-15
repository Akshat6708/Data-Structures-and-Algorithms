#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int s, int e){
    // step 1. -> choose pivotelement
    int pivotIndex=s;
    int pivotElement=arr[s];

    // step 2. -> find right position for pivot element and place it there 
      int count=0;
      for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivotElement){
            count++;
        }
      }
    // jab me loop se bhahar aaya to mere pass pivot ke liye right index ready hai
    int rightIndex=s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;
    
    // step 3.->left me chote right me bade 
   
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        // 2 case ho sakte h 
        // a.->you found the element to swap
        //b. -> no need to swap

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    // base case 
    if(s>=e)return ;
    // partition logic ,return pivort index
   int p= partition(arr, s ,e);
   // recuesive call
   // piviot element=> left
   quickSort(arr, s,p-1);
   // right
   quickSort(arr, p+1, e);

}
int main(){
    int arr[]={8,1,3,4,20,50,30};
    int n=7;
     int s=0;
     int e=n-1;
     quickSort(arr, s,e);
     for(auto i:arr){
        cout<<i<<" ";
     }
}