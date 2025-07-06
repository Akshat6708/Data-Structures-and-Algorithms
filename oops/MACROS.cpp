#include<iostream>
using namespace std ;

#define PI 3.1417   // macros
#define SQUARE(a)((a)*(a))

  float circleArea(float r){
   return PI* r*r;
  }
    float circlePerameter(float r){
   return   2*PI* r;
  }

  int square(int a){
    return SQUARE (a);
  }

 int main(){
  cout<<"Area of circle is : " <<circleArea(4.2)<<endl;
  cout<<"perameter of circle is : "<<circlePerameter(4.2)<<endl;

  cout<<"Square : "<<square(5);

  return 0;
 }