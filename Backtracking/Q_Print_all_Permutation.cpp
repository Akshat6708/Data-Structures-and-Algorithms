#include<iostream>
using namespace std;

// void printPermutation(string &str , int i){
//     // base case 
//     if(i>=str.length()) {
//         cout<<str<<" ";
//         return;
//     }
//     // swaping
//     for(int j=i; j<str.length(); j++){
//         swap(str[i],str[j]);
//          // call recursion 
//     printPermutation(str, i+1);
//          // backtracking 
//         swap(str[i],str[j]);
//     }
// }
// int main(){
//     string str="abc";
//     int i=0;
//     printPermutation(str, i);
//     return 0;
// }

void printPremutation(string& str, int i){
    // base case 
    if(i>=str.length()){
    cout<<str<<" ";
       return ;
    }
    // recursion call
  
    for(int j=i; j<str.length();j++){
        swap(str[i], str[j]);
          // recursion call
       printPremutation(str, i+1); 
       // backtraking
        swap(str[i], str[j]);
    }  
}
 

int main(){
    string str= "abc";
    int i=0;
    printPremutation(str, i);
}