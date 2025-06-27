 #include<iostream>
using namespace std; 
class human{
    public:
    string color;
    int age;

};
class man : public human{
    public:
    int weight;
};

int main(){
    man a;
    a.age=22;
    a.color="white";
    a.weight=62;
    cout<<a.color <<" " <<a.age<<" "<<a.weight<< " " ;
}