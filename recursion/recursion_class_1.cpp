#include<iostream>
using namespace std;


// int factorial(int n){
//     // base condition  (rukna kab hai)
//     if(n==1) return 1;
//     int ans= n*factorial(n-1);
// return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the value of n ";
//     cin>>n;
//     int ans = factorial(n); 
//     cout<<ans<<endl;
// }



//  example -> 2.
  //  tail recursion

// void printcounting(int n){
//     // base condition 
//     if(n==0) return ;

//     // processing
//     cout<<n<<" ";

//     // recurcive relation
//         printcounting(n-1);

// }
// int main(){
//     int n;
//     cout<<"enter the number of n ";
//     cin>>n;
//     printcounting(n);
// }

//  haed recursion

// void printcounting(int n){
//     // base condition 
//     if(n==0) return ;

//   // recurcive relation
//   printcounting(n-1);

//     // processing
//     cout<<n<<" ";

// }
// int main(){
//     int n;
//     cout<<"enter the number of n ";
//     cin>>n;
//     printcounting(n);
// }



  // fibonaccu series
 int fib(int n){
 // base condition 
    if(n==1){
   // first term
       return 0;
 }
    if(n==2){
    // second term 
       return 1;
 }
  //  RR->  
  int ans= fib(n-1)+fib(n-2);
  return ans;
} 
  int main(){
    int n;
    cout<<"Enter the term you want to see ";
    cin>>n;
   int ans= fib(n);
   cout<<n<<"th term is :"<<ans;
  }