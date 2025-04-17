#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch [50];
    cout<<"enter a string : ";
   cin.getline(ch,50);
   for(int i=0; i<strlen(ch);i++){
    if(ch[i]==' '){
        ch[i]='@';
    }
   }
 
cout<<" string is :"<<ch;
}