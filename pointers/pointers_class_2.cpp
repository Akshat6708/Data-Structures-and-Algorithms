#include<iostream>
using namespace std; 
int main(){
    // int arr[4]={10,20,30,40};
//    cout<<arr<<endl;
//    cout<<&arr<<endl;
//    cout<<&arr[0]<<endl;


//    int *p=arr;
//    cout<<p<<endl;
//    cout<<&p<<endl;
//    cout<<*p<<endl;


// int arr[4]={10,20,30,40};
// cout<<*arr<<endl;
// cout<<arr[0]<<endl;
// cout<<*arr+1<<endl;
// cout<<*(arr)+1<<endl;
// cout<<*(arr+1)<<endl;
// cout<<arr[1]<<endl;
// cout<<*(arr+2)<<endl;
// cout<<arr[2]<<endl;
// cout<<*(arr+3)<<endl;
// cout<<arr[3]<<endl;


// cout<<0[arr]<<endl;
// for(int i=0; i<4; i++){
//     cout<<i[arr]<<endl;
// }


    
//   poiners in character array

// char ch[40] ="akshatpatidar";
// char*chpt=&ch[0];
// cout<<ch<<endl;
// cout<<&ch<<endl;
// cout<<&ch[0]<<endl;
// cout<<*(ch+3)<<endl;
// cout<<ch[0]<<endl;
// cout<<chpt<<endl;
// cout<<chpt+2<<endl;
// cout<<*chpt<<endl;


int arr[4]={10,20,30,40};
// int* ptr=&arr;   throw an error 
// cout<<ptr;

int *ptr=arr;
cout<<ptr[2];


    return 0;

}