#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


//  Q. ->  find the last occurence of a char 

//    method ->  1.
// int main(){
//     string str= "abcddedg";
//     char target='d';
//     int ans =-1;
//     for(int i=0; i<str.length(); i++){
//         if(str[i]==target){
//             ans=i;
//         }
//     }
//     cout<<"ans is :"<<ans;
// }

//  method  -> 2.

// int main(){
//     string str= "abcddedg";
//     char target='a';
//     int ans =-1;
//    for(int i=str.length()-1; i>=0;i--){
//     if(target==str[i]){
//         ans = i;
//        break;
//     }
//    }
//     cout<<"ans is :"<<ans;
// }



//    now solve this question using recuresion

//   method -> 1. left to right search 

// void solve(string& str, char& target, int i , int& ans){
//     // base case 
//     if(i>=str.length()){
//         return ;
//     }
//     // ek case solve kero
    
//     if(str[i]==target){
//      ans= i;
//     }
//     // baki recursion sambhal lega
//     solve(str, target, i+1, ans);
   
// }

// int main(){
//     string str="abcddedg";
//     char target='d';
//     int i=0;
//     int ans =-1;
//     solve(str, target, i, ans);
//   cout<<"ans is "<<ans;
// }


// method -> 2. right  to left search 



void solve(string& str, char& target, int i , int& ans){
    // base case 
   if(i<0){
    return ;
   }
    // ek case solve kero
    
    if(str[i]==target){
        ans=i;
        return ;
    }
    // baki recursion sambhal lega
    solve(str, target, i-1, ans);
   
}

int main(){
    string str="eabcddedg";
    char target='e';
    int i=str.length()-1;
    int ans =-1;
    solve(str, target, i, ans);
  cout<<"ans is "<<ans;
}