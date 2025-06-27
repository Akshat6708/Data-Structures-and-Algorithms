#include<iostream>
#include<vector>
using namespace std; 
int main(){
    string s;
    cout<<"enter the string :";
    cin>>s;
    int k;
    cout<<"enter the size of k :";
    cin>>k;
    char fill ='x';
    vector<string> ans;
    int n =s.size();
    for(int i=0 ; i<n; i++){
        string str="";
       str+=s[i];
       if(str.size()==k){
        ans.push_back(str);
          str="";
    
       }
        


        for(auto val : ans){
            cout<<val<<" ";
        }
    }

}