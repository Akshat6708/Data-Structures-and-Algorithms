#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s="hello";
  for(int i=0; i<s.length();i++){
  int ans= stoi( s.substr(i,1));
  cout<<ans<<" ";
}

}
 
