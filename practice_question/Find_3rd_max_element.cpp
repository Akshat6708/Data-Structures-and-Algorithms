#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    vector<int > nums{2,53,64,22,55,25,75,3};
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>=first){
            first =nums[i];
        }
        else if(nums[i]>=second){
            second =nums[i];
        }
        else if(nums[i]>=third){
            third =nums[i];
        }
    }
    cout<<"the third largest number is : "<<third;

}