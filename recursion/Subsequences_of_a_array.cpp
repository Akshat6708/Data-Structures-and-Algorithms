#include<iostream>
#include<vector>
using namespace std;

void PrintSubSequences(string str, string output, int i, vector<string>&v){
    // base case 
    if(i>=str.length()){
        int j=1;
        // cout<<output<<endl;
        v.push_back(output);
        return;
    }
 
    // exclude
    PrintSubSequences(str, output, i+1,v);
    // include
    output.push_back(str[i]);
   
    PrintSubSequences(str, output, i+1,v);

}
int main(){
    string str ="abc";
    string output="";
    vector<string>v;
    int i=0;
    PrintSubSequences(str, output, i,v);
    for(auto val:v){
        cout<<val<<" ";
    }
}