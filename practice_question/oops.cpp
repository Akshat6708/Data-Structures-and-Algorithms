#include<iostream>
using namespace std; 

class student{
   // declaration 
   private:
   int weight;
   public:
   string name;
   int age;
   int getweight(){
     return weight;
   }
   void setweight(int weight){
   this-> weight=weight;
   }
};

int main(){

    // static
//     student obj;
//    obj.setweight(22);
//     obj.name="akshat patidar";
//     obj.age=21;
//     cout<<obj.name<<endl;
//     cout<<obj.age<<endl;
//     int weight=obj.getweight();
//     cout<<"student weight is  "<< weight<<endl;


    // dynamic 
   student*obj=new student;

   obj -> name="hariom patidar";
   obj->age=21;
   obj->setweight(60);
  int weight= obj->getweight();
  cout<<obj->name<<endl;
  cout<<obj->age<<endl;
  cout<<weight<<endl;



    return 0;
}