#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> nums {7,6,4,3,1};
    int n= nums.size();
    int index=-1;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<n ;i++){
    mini= min(mini , nums[i]);
  
    if(mini>= nums[i]){
        index=i; 
    }
    }
    for(int j=index; j<n ; j++){
        maxi= max(maxi, nums[j]);
    }
      
    int maxProfit=maxi-mini;
    cout<<"maximun profit is : "<<maxProfit ;
}