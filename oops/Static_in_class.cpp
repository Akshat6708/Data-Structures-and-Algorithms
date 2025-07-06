#include<iostream>
using namespace std ;

class dost {
    public:
   static int x, y;

    void print() const{
        cout<<x<<" "<<y<<" "<<endl;
    }
   
};

 int dost::x;
 int dost::y;
int main(){
   dost obj1;
   obj1.x= 10;
   obj1.y= 20 ;
    obj1.print();
   dost obj2;
   obj2.x =55;
   obj2.y= 66;
   obj1.print();
   obj2.print();

    return 0;
}