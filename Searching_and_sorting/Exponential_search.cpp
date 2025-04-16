#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

int expoSearch(vector<int> arr, int x,int n){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<arr.size()&& arr[i]<=x){
        i=i*2;
    }
    return bs(arr,i/2, min(i,n-1) ,x);

}
int main(){
    vector<int > arr{1,2,3,4,5,8,10,13,15,16,19,20,30,50,60};
    int n=arr.size();
    int x=60;
    int ans=expoSearch(arr,x,n);
    cout<<"target "<<x<<" is found on index "<<ans;
}
