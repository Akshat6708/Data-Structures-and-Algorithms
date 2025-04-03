#include<iostream>
#include<limits.h>
using namespace std;

//int main(){
    //   Array declare
    // int arr[5];
    // cout<<"Array created successfully"<<endl;
    // cout<<arr<<endl;

    //  array declaration 

    // int arr[]={1,2,3,4,5};
    // int brr[5]={1,2,3,4,5};
    // error
    // int crr[4]={1,2,3,4,5};
    //  cout<<"array declearation successfully"<<endl;
    //  cout<<arr[3];
    
    // print all value

    // int arr[]={1,2,3,4,5};
    //  for(int i=0 ; i<5; i++){
    //     cout<<arr[i]<<" ";
    //  }

    //  user input

    // int arr[5];
    // cout<<"enter the values of array"<<endl;
    // for(int i=0;i<5;i++){
    
    //     cin>>arr[i];
    // }
    // cout<<"values of an array is : "<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }




    // int arr[5]={1,2,3,4,5};
    // for (int i=0;i<5;i++){
    //     cout<<arr[i]*2<<" ";
    // }





//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         arr[i]=2;
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//  pass by value
// void inc(int a){
//    a++;
//    cout<<a<<endl;
// }

// int main(){
//    int a=5;
//    inc(a);
//    cout<<a;

// }



//  pass by refrence
// void printArray(int arr[],int size){
//    for(int i=0; i<size;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// }
// void increment(int arr[],int size){
//    arr[0]=arr[0]+10;
//    printArray(arr,size);
// }

// int main(){
//     int arr[]={5,6};
//     int size=2;
//     increment(arr,size);
//     printArray(arr, size);
// }



//     linear search in array
//     method -> 1.

// bool findKey(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//      if(arr[i]==key){
//          return true;
//      }
//     }
//     return false;
    
//  }
 
// int main(){
//    int arr[]={1,2,3,4,5,6,7,8};
//    int size=8;
//    int key;
//    cout<<"enter a key ";
//    cin>>key;
//    if(findKey(arr,size,key)){
//     cout<<"Found";
//    }
//    else{
//     cout<<"not Found";
//    }

//     return 0;
// }

 
//       method -> 2.

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//    int size=8;
//    int key ;
//    cout<<"enter a key ";
//    cin>>key;
//    bool flag=0;

//    for(int i=0;i<size;i++){
//     if(arr[i]==key){
//        flag=1;
//        break;
//     }
//    }
//    if(flag){
//     cout<<"present";
//    }
//    else{
//     cout<<"Absent";
//    }

// }



//    Count 0's and 1's in Array


// int countnumber(int arr[],int n,int m, int size){
//   for(int i=0;i<size;i++){
//     if (arr[i]==0){
//         n=n+1;
//     }
//     else{
//         m=m+1;
//     }
//   }
//   cout<<"total number of 0's is:"<<n<<endl;
//   cout<<"total number of 1's is:"<<m<<endl;
// //   return n,m;
// }

// int main(){
//     int arr[]={0,1,0,1,0,0,1,0,0,0};
//     int size=10;
//     int n=0;
//     int m=0;
//     countnumber(arr,n,m,size);
      
    
// }


// find maximum number in array

// int main(){
//     int arr[]={1,2,367,568,66,35,67,444};
//     int size=8;
//     int maximum=INT_MIN ;
//     for (int i=0 ; i<size; i++){
//         if(arr[i]>maximum){
//             maximum=arr[i];
//         }
//     }
//     cout<<"the maximum value is :"<<maximum<<endl;
// }

// find minimum number in array


// int main(){
//     int arr[]={100,2,367,-568,66,67,444,-1};
//     int size=8;
//     int minimum=INT_MAX ;
//     for (int i=0 ; i<size; i++){
//         if(arr[i]<minimum){
//             minimum=arr[i];
//         }
//     }
//     cout<<"the minimum value is :"<<minimum<<endl;
// }



//  Extreme print in array
// example arr[]={1,2,3,4,5,6,7,8};
//  output : 1 8 2 7 3 6 4 5;


// int main(){
//     int arr[8]={10,20,30,40,50,60,70};
//     int size=7;
//     int start=0;
//     int end=size-1;

//     while(true){
//         if(start>end){
//          break;
//         }
//         if(start==end){
//             cout<<arr[start];
//          }
//          else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//          }
      
//        start++;
//        end--;
 
//      }
 
//  }
    

   // reverse an array

//    int main(){
//     int arr[6]={10,20,30,40,50,60};
//     int size=6;
//     int start=0;
//     int end=size-1;
//     while(true){
//         if(start>end){
//             break;
//         }
//         if(start==end){
//             start[arr]=end[arr];
//         }
//         else{
//             start[arr]=end[arr];
//             end[arr]=start[arr];
//         }
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";

//         start++;
//         end--;
//     }
  
//    }



//       Reverse an Array

int main (){
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;
    while(true){
        if(start>end){
            break;
        }
        // swap(arr[start],arr[end]);
        if(start==end){
            arr[start]=arr[end];
        }
        else{
            arr[start]=arr[start]+arr[end];
            arr[end]=arr[start]-arr[end];
            arr[start]=arr[start]-arr[end];
        }
       

        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
