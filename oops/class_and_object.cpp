
#include<iostream>
using namespace std ; 
// class student {
//     private:
//     int weight;
//     public:
//     // state or property
//  int age;
//  string name;   // including padding 
//  // total size is 8 bytes 4+1(+3 padding)


//  //  behaviour
//  void eat(){
//    cout<<"akshat is eating"<<endl;
//  }
//  void sleep(){
//    cout<<"akshat is sleeping"<<endl;
//  }

//  int getweight(){
//     return weight;
//  }
//  void setweight(int w){
//     weight=w;
//  }
// };
// int main(){
//       //object creation 
//      //  static 
// //      student akshat;
// //      akshat.name="akshat patidar";
// //      akshat.age=21;
// //   cout<<"name of student is : "<<akshat.name<<endl;
// //   cout<<"age of student is : "<<akshat.age<<endl;
// //    akshat.eat();
// //    akshat.sleep();
// //    akshat.setweight(65);
// //    cout<<"weight of  student is : "<<akshat.getweight()<<endl;

//      // dynamic

//       student*akshat=new student;
//       akshat->age=22;
//       akshat->sleep();
//       akshat->name="akshat patidar";
//       cout<<akshat->name<<" "<<endl;
//       cout<< akshat->age<<" "<<endl;


 
// }

class animal {
   public:
   string name ;
   string color;
   private:
   int weight;
 public:
    int  getdata(){  return weight;
   }
   void setdata( int weight){
      this->weight=weight;
   }
};
int main(){
   animal mamal;
   mamal.name="dog";
   mamal.color="black";
   mamal.setdata(35);
   cout<<mamal.getdata()<<endl;
}

