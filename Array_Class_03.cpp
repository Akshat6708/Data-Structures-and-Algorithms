#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// int main(){

    //declare
    // int brr[2][2];

    // initialisation 
//     int arr[56][26]={
//     {1,3,4},
//     {2,4,6},
//     {7,8,9}
// };
//  row wise print 

// for (int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }


//  print column wise

// cout<<"print colounm Wise "<<endl;
// for (int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }


// }



// Q.1 ->   print row sum 


// int main(){
    // int arr[5][4]={
    //     {1,7,5,9},
    //     {6,3,3,2},
    //     {9,1,5,4},
    //     {6,3,9,2},
    //     {1,8,2,9}
    // };
    // int rows=5;
    // int cols=4;
   
    
    // for(int i=0;i<rows;i++){
    //     int sum=0;
    //     for(int j=0;j<cols;j++){
    //        sum=sum+arr[i][j];
    //     }
      
    //     cout<<"the sum of row "<<i<<" "<<"is :"<<" "<<sum<<" "<<endl;
    // }
    

//     print column wise

// void Printsumcolwise(int arr[][3],int rows, int cols){
//     for (int i=0;i<rows;i++){
//         int sum=0;
//         for (int j=0;j<cols;j++){
//            sum =sum + arr[i][j];
//         }
//         cout<<"sum of columns is :"<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     cout<<"enter the value of an array"<<endl;
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols;j++){
//             cin>>arr[j][i];
//         }
//     }
//     Printsumcolwise(arr,rows,cols);
//     }
    

//  linear search in 2D array

// bool FindElement(int arr[][3],int rows, int cols,int Element){
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols; j++){
//             if(Element==arr[i][j]){
//                 return true;
//             }
           
//         }
//     }
//     return false;
// }

// int main(){
//         int arr[3][3];
//     int rows=3;
//     int cols=3;
//     int Element=90;
//     cout<<"enter the value of an array"<<endl;
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols;j++){
//             cin>>arr[j][i];
//         }
//     }
//     if(
//         FindElement(arr,rows,cols,Element)){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }

// }


//   find maximum number in 2D Array
// int findMaxValue(int arr[][3],int rows,int cols,int Maximum){
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols;j++){
//            if(arr[i][j]>Maximum){
//             Maximum=arr[i][j];
//            }
//         }
      
//     }
//     return Maximum;
// }

// int main(){
// int arr[3][3];
// int rows=3;
// int cols=3;
// int Maximum=INT_MIN;
// cout<<"enter the value of an array"<<endl;
// for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         cin>>arr[j][i];
//     }
// }
// int maxValue=findMaxValue(arr,rows,cols,Maximum);
// cout<<"the maximun number is :"<<maxValue;
// }


//   Transpose a matrix

// void TransposeValue(int arr[][3], int rows ,int cols,int transpose[][3]){
//     for (int i=0;i<rows;i++){
//                 for (int j=0;j<cols;j++){
//                     transpose[i][j]=arr[j][i];
//                 }
              
//             }
// }

// void printTranspose(int arr[][3], int rows ,int cols){
//     cout<<"Transpose Matrix"<<endl;
//   for (int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//        cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }

// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     int transpose[3][3];
//     cout<<"enter the value of an array"<<endl;
//     for (int i=0;i<rows;i++){
//         for (int j=0;j<cols;j++){
//             cin>>arr[j][i];
//         }
//     }
 
//    TransposeValue(arr,rows,cols,transpose);
    
//    printTranspose(arr, rows,cols);

//     }



//              2D vector 
// int main(){
    // vector<vector <int> >arr;
    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i=0;i<arr.size();i++){
    //     for (int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//     int row=3;
//     int col=5;
// vector<vector <int> > arr(row,vector<int>(col,0));

//     for (int i=0;i<arr.size();i++){
//         for (int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// vector <vector<int>>arr(5,vector<int>(5,-8));
// for (int i=0;i<arr.size();i++){
//     for (int j=0; j<arr[i].size();j++){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }


// }
  



//   sort 0's 1's and 2's in array

int main(){
    int arr[10]={0,1,2,0,0,2,1,1,2,0};
    int size=10;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[i],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}