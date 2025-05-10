#include<iostream>
using namespace std;
void FindDigits(int& num){
    // base case
    if(num==0)return ;
    // ek ko solve kero 
  
      int newVlaueOfNum=num/10; 
   
    // baki recursion sambhal lega
       FindDigits(newVlaueOfNum);
    int ans=0;
    ans= num%10;
    cout<<ans<<" ";
   
}
int main(){
    int num=678;
    FindDigits(num);
}