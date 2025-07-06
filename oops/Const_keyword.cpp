#include<iostream>
using namespace std;

class akshat{
    private:
    int a;
    int* b;
    public :
    //  constuructor 
    akshat(){
        a=0;
        b=new int (0);
    }

    // intialization list (same work  as constructor)
  
     akshat(int a, int b): a(40), b(new int (50)){}
  

   int  getA() const{
        return this-> a;
    }
    void setA(int a ){
        this -> a = a;
    }
   int getB() const{
    return *b;
   } 
   void setB(int val){
      *b= val;
   }
    
};

int main(){
  akshat obj ;
  obj.setA(10);
  obj.setB(20);
  cout<< obj.getA()<<endl;
  cout<< obj.getB()<<endl;
}




// int main2(){
// //    const int x=5;   // x is constant
//    // intialization can be done 
//    // but can not re-assign a value

// //    const int x =10;
// //     cout<<x<<endl;

// // 2. Const with Pointers

//   //  2.1 -> const data , but non- const pointer


// //    const int *a= new int(2) ;  // const data , non - const pointer
// //    int const*a =new int (2) // line no 12 and 13 both are same 
//    // if const before the * then data is constant but pointer can't be constant 
//    // *a= 20;  // can not change the contant of pointer
// //   cout<<*a<<endl;
// //   int b = 10;
// //   a=&b;  // pointer itself can be reassign 
// //   cout<<*a<<endl;

//   //  2.2 -> const pointer , but non- const data
// // int *const a = new int (2); // pointer const , data non- const 
// // cout<<*a<<endl;
// //   *a = 20;
// //   cout<<*a <<endl ;

// // int b =10 ;
// //  a= &b;   // pointer can't be change 


//   //  2.3 -> const pointer , const data

//  const int * const a = new int(2);
// //    *a =10;  can't change content 
// //    cout<<*a<<endl;
//   int b =20 ;
// //    a=&b;  // can't change pointer

// return 0;

// }