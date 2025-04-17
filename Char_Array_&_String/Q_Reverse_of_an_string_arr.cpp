#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch [50];
    cout<<"enter a string : ";
   cin.getline(ch,50);
   
   int i=0;
   int j=strlen(ch)-1;
   while(i<=j){
    if(i==j){
        swap(ch[i],ch[i]);
    }
    swap(ch[i],ch[j]);
    i++, j--;
   }
cout<<"reverse string is :"<<ch;
}