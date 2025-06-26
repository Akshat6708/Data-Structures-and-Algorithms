 #include<iostream>
using namespace std; 
class animal {
    private: 
    int weight;
    public:
    // state  or property 
    string name; 
    int age;

    //  default constructor
    // animal(){
    //   this-> age=0;
    //   this-> weight=0;
    //   this->name="";
    //   cout<<"constractor called"<<endl;
    // }

    // parameterise constructor

    // animal(int age ,  string name){
    //   this-> age = age ;
    //   this -> name= name;
    //   cout<<"constructor called 2"<<endl;
    // }

    //  animal(int age , int weight , string name){
    //   this -> age = age ;
    //   this-> name = name ;
    //   this-> weight= weight;
    //   cout<<"constructor called 3"<<endl;
    // }
    //  copy constructor 

    // animal (animal& obj){
    //   this->name=name;
    //   this->age = age;
    //   this->weight= weight;
    //   cout<<"i am inside a copy constructuor"<<endl;

    // }

    // distructor

    ~animal(){
      cout<<"i am inside distructor"<<endl;
    }


    // behavior  is like a function 
   void sleep(){
     cout <<"sleeping"<<endl;
    }
    void eat(){
        cout<<"Eating"<<endl;
    }
    int getweight(){
        return weight;
    }
    void setweight(int weight){
   this->weight = weight;
    }

};
int main(){
    // animal akshat ;     // animal is an object and akshat is a object name

    //  static memory allocation
    // akshat.name="dog";
    // akshat.age=10;
    // cout<<"animal name :"<<akshat.name<<endl;
    // cout<<"age :"<<akshat.age<<endl;
    // akshat.sleep();
    // akshat.eat();
    // // when we access a private mamber from outside the class then we use gatter and satter concepets 
    // akshat.setweight(101);
    // cout<<akshat.getweight()<<endl;


    // Dynamic  allocation  
  // animal* akshat = new animal ;
//    (*akshat).age=20;
//    (*akshat).name= "lion";  // derefrence
//   cout<<(*akshat).age <<endl;
//   cout<<(*akshat).name <<endl;

  // alternet dynamic
//   akshat->age = 2; 
//   akshat-> name = "kutta";
//   cout<<akshat->age<<endl;
//   cout<<akshat->name<<endl;
  //   akshat->setweight(12);
  //  cout<< akshat->getweight();

   
//   animal a(10,"cat");
//   animal* b= new animal(5, 30, "dog");
// // object copy
//   animal s =a;
//   animal Animal(a);


// distructor
  // in static memory allocation 
  animal a ;
  a.age=10;

  // in dyamamic allocation 
   animal* obj =new animal ;
   obj->age=20;
   delete obj;
    return 0; 
} 