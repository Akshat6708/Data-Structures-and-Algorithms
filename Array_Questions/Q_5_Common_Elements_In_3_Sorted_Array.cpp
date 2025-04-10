#include<iostream>
#include<vector>
using namespace std;


vector<int> commonElements(vector<int>arr1,vector<int>arr2,vector<int>arr3,vector<int>ans){
    int i=0;int j=0;int k=0;
    while(arr1[i]<arr1.size()&&arr2[j]<arr2.size()&&arr3[k]<arr3.size()){
        if(arr1[i]==arr2[j]==arr3[k]){
            ans.push_back(arr1[i]);
         i++;j++;k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;    
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;

}
int main(){


    
    vector<int> arr1{1,5,10,20,40,80};
    vector<int>arr2{6,7,20,80,100};
    vector<int>arr3{3,4,15,20,30,70,80,120};
    vector<int>ans;
   vector<int>answer= commonElements(arr1,arr2,arr3,ans);

   
    for(int i=0;i<ans.size();i++){
        cout<<answer[i];
    }
    return 0;
}