#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
  string s ;
  cout<<"enter the string : ";
  cin>>s;
  int n =s.size();
  int count =0;
  for(int i=0; i<n ; i++){
    for(int j =i ; j<n ; j++){
        if(s[i]==s[j]){
            count ++; 
            if(count> 2){
                s.erase(j, 1);
            }
            j++;
        }
      else{
        break;
      }
    }

  }
  cout<<s;

}