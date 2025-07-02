 #include<iostream>
using namespace std;
class fruits{
    public:
    
    int weight;
};
class Apple:public fruits{
    public:
    string name= "Apple" ;
    string color = "Red";
   
};
class Banana : public fruits{
    public:
    string name= "Banana";
  string color = "yellow";
};

int main (){
   Apple a1;
   Banana b1;
   cout<<a1.name<<" " <<a1.color<<" " <<a1.weight<<endl;
    cout<<b1.name<<" " <<b1.color<<" " <<b1.weight<<endl;
}