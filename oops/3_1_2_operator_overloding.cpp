 #include<iostream>
using namespace std;
class Paramerter{
    public: 
    int val;
   void operator+(Paramerter& obj2){
    int value1= this->val; 
    int value2=obj2.val;
    cout<<(value2 - value1);
   }
};
int main(){
    Paramerter obj1 , obj2 ;
    obj1.val=2;
    obj2.val=7;

    obj1 + obj2;
    return 0;

}