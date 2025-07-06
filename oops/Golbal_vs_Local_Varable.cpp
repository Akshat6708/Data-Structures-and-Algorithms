#include<iostream>
using namespace std;
 
int x = 10 ;  // Global variable

  void fun(){
    int x =500;
    cout<<x <<endl;
    ::x =1000;
    cout<<::x<<endl;
  }

  int main(){
    
    int x =55;  // Local variable
    cout<<x<<endl;
    cout<<::x<<endl; // accessing global variable with ::

    {
        int x = 100;
        cout <<x << endl;
        cout <<::x << endl;

    }
    fun();
  }