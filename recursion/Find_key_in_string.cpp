#include<iostream>
#include<limits.h>
using namespace std;
// bool FindKey(string& str, char& key, int&  n, int i){
//     // base condition
//     if(i>=n)return false;
//     // solve one case
//     if(str[i]==key) return true;
   
//   return  FindKey(str, key, n, i+1);
// }
// int main(){
//     string str="akshatpatidar";
//     char key='a';
//     int n=13;
//     int i=0;
//    bool ans= FindKey(str, key , n , i);
//    cout<<"ans is :"<<ans;
// }


//  find index where index is present

// void FindKey(string& str, char& key, int&  n, int i){
//     // base condition
//     if(i>=n)return ;
//     // solve one case
//     if(str[i]==key) 
//     cout<<"key is present at index :"<<i<<endl;
   
//    FindKey(str, key, n, i+1);
// }
// int main(){
//     string str="akshatpatidar";
//     char key='a';
//     int n=13;
//     int i=0;
//   FindKey(str, key , n , i);
  
// }


//     count the no of key index are present 

int  FindKey(string& str, char& key, int&  n, int i,int& count){
    // base condition
    if(i>=n)return count ;
    // solve one case
    if(str[i]==key) 
  count++;
   
   FindKey(str, key, n, i+1 , count);
   return count;
}
int main(){
    string str="akshatpatidar";
    char key='a';
    int count =0;
    int n=13;
    int i=0;
 int ans= FindKey(str, key , n , i,count);
 cout<<"total no of key index is : "<<ans;
  
}