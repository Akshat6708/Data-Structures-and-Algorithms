#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrom(char ch[]){
    int i=0;
   int j=strlen(ch)-1;
   while(i<=j){
    if(ch[i]==ch[j]){
        return true;
        i++; j--;
    }
    else{
        return false;
        break;
    }
   }
   return false;
}
int main(){
   char ch[50];
   cin >>ch;
   bool ans =isPalindrom(ch);
  if(ans==true){
    cout<<"given string is palindrom ";
  }
  else{
    cout<<"not a palindrom";
  }
}



