//  #include<iostream>
// using namespace std; 
// class Animal {
//    public:
//     int age =22;
//     int weight= 100;
//     void eat (){
//         cout<<"Eatting "<<endl;
//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;
//     }
// };
// class dog : public Animal{

// };
// int main(){
//     dog d1; 
//     d1.eat();
//     d1.sleep();
//     cout<<"age of dog is  "<<d1.age;
// }




 #include<iostream>
using namespace std; 
class Animal {
   public:
    int age =22;
  
};
class dog : public Animal{
    public:
    void print(){
        cout<<this->age;
    }
};
int main(){
    dog d1; 
    cout<<d1.age;
   d1.print();


}