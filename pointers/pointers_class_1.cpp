#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // cout<<" the value of a is "<<a<<" and address is :"<<&a<<endl;
    // int b=5;
    // cout<<" the value of b is "<<b<<" and address is :"<<&b<<endl;


// int a =10;
// int *ptr= &a;
// cout<<"address of a :"<<&a<<endl;
// cout<<"value stored an ptr is :"<<ptr<<endl;
// cout<<"value ptr is pointing to is :"<<*ptr<<endl;
// cout<<"address of ptr :"<<&ptr;


//  find out the storage to diffrent data types in pointers

// int a= 5;
// int *p=&a;
// cout<<sizeof(p)<<endl;

// char c= 'a';
// char *ch=&c;
// cout<<sizeof(ch)<<endl;

// double d= 5.435;
// double *dtr=&d;
// cout<<sizeof(dtr)<<endl;

//  consuming all data type are same storage because pointers can be store a address so the address are the same size

// BAD practice 
// int *p;
// cout<<p<<endl;


//  null pointer 
// int *ptr=0;
// cout<<ptr;


// int a =10;
// int *p=&a;
// copy address
// int *dusrapointer = p;
// cout<<p<<endl;
// cout<<dusrapointer<<endl;

int a=10;
int*p=&a;
int *q=p;
int *r=q;
cout<<a<<endl;   //10
cout<<&a<<endl;  // abscwdsf
cout<<p<<endl;   // add of a
cout<<&p<<endl;  // address of p
cout<<*p<<endl;  // 10
cout<<q<<endl;   // add of a
cout<<&q<<endl;  // add of q
cout<<*q<<endl;  // 10
cout<<r<<endl;   
cout<<&r<<endl;
cout<<*r<<endl;


}