#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n; 
    cout<<"enter the range of the laxiographycal order: ";
    cin>>n;
    vector<int > ans ;
  
    for (int i=1; i<=n; i++){
      
        ans.push_back(i);
        for(int j=0; j<=9; j++){

          string strnum= to_string(i)+to_string(j);
          int num=stoi(strnum);
         
          if(num <= n ){
          
            ans.push_back(num);
          }else{
            break;
          }
        }
    }
    for(auto i: ans){
      cout<<i<<" ";
    }
    }