#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // char name[50];
    // cout<<"enter your name ";
    // cin>>name;
    // cout<<"my name is :"<< name;


    // char name[50];
    // cin>> name;
    // for (int i=0 ;i<7; i++){
    //     cout<<"index is "<<i<<" and value is :"<<name[i]<<endl;
    // }
    // int value= (int)name[6];
    // cout << "value is :"<<value;  // ans is -> 0 that is a ascii value is represented null value


//     char name[5];
//     cin>>name;
//    for (int i=0 ;i<5;i++){
//     cout<<"index is "<<i<<" and value is :"<<name[i]<<endl;

//    }

// char ch[100];
// cin.getline(ch,50);
// cout<<ch;

char name [100];
cin.getline(name,50);
int count =0;
int i=0;
while(name[i]!='\0'){
    count++;
    i++;
}
cout << count<<endl ;
// lenght of string -> strlen()
// cout<<strlen(name);   <- predefine function





//        string  





}
