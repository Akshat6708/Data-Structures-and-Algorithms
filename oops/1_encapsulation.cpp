//  #include<iostream>
// using namespace std; 
// class Animal{
//     private:
//     int weight;
//     public: 
//    string name;
//    int age ;

//    // member function 
//    void eat (){
//     cout<<"eating";
//    }
//    void sleep (){
//     cout<<"sleeping";
//    }
//  int getter(){
//     return this->weight;
//  }
//  void setter(int weight){
//    this->weight = weight;
//  }

// };
// int main(){
//     Animal obj;
//     obj.age= 22; 
//     obj.name = "aman";
//     obj.setter(100);
//     cout<<obj.name<<endl;
//     cout<<obj.age<<endl;
//    cout<< obj.getter();
// }


//  pure encapsulation  , 100% encapsulation 

 #include<iostream>
using namespace std; 
class Animal{
    private:
    int weight;
   int age ;
  public:
   // member function 
 
 int getter(){
    return this->weight ;
 }
 void setter(int weight){
    this-> weight=weight;
    this->age = age;
 }
 

};
int main(){
    Animal obj;
   obj.setter(100);
   cout<<obj.getter()<<endl;
 
}