#include<iostream> 
using namespace std; 
class Animal{
    public:
  virtual  void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog : public Animal{
    public:
    // override
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    // Dog obj ;
    // obj.speak();

    //  if we create a dynamic object then 
      
    // Animal* obj = new Animal ;
    // obj->speak();

    // Dog*  obj = new Dog;
    // obj->speak();
  

    // upcasting 
    // Animal* obj = new Dog;
    // obj-> speak();   // without virtual keyword call always pointer class
//  and we use a virtual keyword then call always the object side class
    
  // downcasting 
  Dog* obj = (Dog*)new Animal;
  obj->speak();
}