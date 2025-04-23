#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int > arr{1,2,3,4,5,6,7,8,9};
    int m=3;
    int i=m;
    
    int j=arr.size()-1;
    while(i<=j){
    swap(arr[i+1],arr[j]);
    i++;
    j--;

    }
   for (int i=0; i<arr.size();i++){
    cout<<arr[i];
   }
}