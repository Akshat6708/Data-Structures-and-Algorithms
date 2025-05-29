// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;

// int main(){

//     map<int, string> m;
//     m[0]='a';
//     m[3]='d';

//     cout<<"value is :"<<m[5];
// }



#include<iostream>
using namespace std ; 
class student {
    public:
    // state or property
 int age;
 string name;   // including padding 
 // total size is 8 bytes 4+1(+3 padding)


 //  behaviour
 void eat(){

 }
 void sleep(){

 }
};
int main(){
      //object creation 
     //  static 
     student akshat;
     akshat.name="akshat patidar";
     akshat.age=21;
  cout<<"name of student is : "<<akshat.name<<endl;
  cout<<"age of student is : "<<akshat.age<<endl;

     // dynamic

 
}