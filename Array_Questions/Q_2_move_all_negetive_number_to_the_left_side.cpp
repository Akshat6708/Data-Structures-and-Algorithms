
//  Q.2 => Move all negetive number to left side of an  array
// assumption ->order maintanace not requried


#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int n;        
cout<<"Enter the size of array : ";
cin>>n;
vector<int>nums(n);
cout<<"enter the values of an array : "<<endl;
for(int i=0;i<nums.size();i++){
    cin>>nums[i];
}
int low=0;
int high=nums.size()-1;
while(low<=high){
    if(nums[low]<0){
        low++;
    }
    else if(nums[high]>=0){
       high--;
    }
    else{
        swap(nums[low],nums[high]);
    }
}
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}

}