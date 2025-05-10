#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    // string str="aksahtpatidar";
    // unordered_map<char, int> freq;
    // for(int i=0; i<str.length(); i++){
    //     char ch=str[i];
    //     freq[ch]++;
    // }
    // for(auto i:freq){
    //     cout<<i.first<<" "<<i.second<<endl; 
    // }
    
    //  int count=0;

    // int arr[9]={1,3,3,4,2,3,5,6,7};
    // unordered_map<int, int> freq;
    
    // for(int i=0; i<9; i++){
    //   int val=arr[i];
    //   count++;
    //   freq[val]++;
    // }
    // for(auto i:freq){
    //     // cout<<i.first<<" "<<i.second<<endl;
     
    // }
    // cout<<count<<" ";

vector<string>words{"cd","ac","dc","ca","zz"};
unordered_map<string, int>freq;
for(int i=0; i<words.size();i++){
    string s=words[i];
    freq[s]++;
}
for(auto i:freq){
    cout<<i.first<<" "<<i.second<<endl;
}

}