# include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
// int main(){
//     //  create vector

//     vector <int> arr;
// //    cout<<arr.size()<<endl;
// //    cout<<arr.capacity();

// //  insert
//    arr.push_back(2);
//    arr.push_back(3);
//    arr.push_back(4);

//    // delete
//    arr.pop_back();

//    for(int i=0; i<arr.size();i++){
//     cout<<arr[i]<<endl;
//    }



// vector <int> brr{1,2,3,4,5,6,7,8};
// for(int i=0; i<brr.size();i++){
//     cout<<brr[i]<<" ";
// }


// int n;
// cout<<"enter the value of vactor"<<endl;
// cin>>n;
// vector <int> crr(n,2);

// for(int i=0; i<crr.size();i++){
//     cout<<crr[i]<<" ";
    
// }
// }


//   find unique Element

// int FindUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=arr[i]^ans;
//     }
//     return ans;
 
// }

// int main(){
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     vector <int> arr(n);
//     cout<<"enter the value of array"<<endl;
//     for(int i=0 ; i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int UniqueElement=FindUnique(arr);
//     cout<<"unique element is :"<<UniqueElement<<endl;


// }




//    uniun of two array 


// int main(){
//     int arr[]={1,2,3,4};
//     int sizea=4;
//     int brr[]={5,6,7};
//     int sizeb=3;

//     vector<int>ans;
//     // push arr element in ans
//     for(int i=0;i<sizea;i++){
//          ans.push_back(arr[i]);
//     }
//     // push brr element in ans

//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//    }

//    for (int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }


//     SECOND SOLUTION (without any duplicacy)




//       intersection of two array 


int main(){
    int arr[]={1,2,3,3,5,8,7};
    int sizea=7;
    int brr[]={3,3,8,9,10};
    int sizeb=5;
    vector<int> ans;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
                ans.push_back(arr[i]);
              
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}

//   Pairs

// int main(){
//     int arr[]={1,2,3,6,4,3,8,5,3,1};
//     int size=10;
//     for (int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==9){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<')'<<" ";
//             }
          
//         }
//     }
// }


//   triplet sum 

// int main(){
//     vector<int>arr{10,20,30,40,50,60,70,80,90,45,5};
//     int sum=100;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             for(int k=j+i;k<arr.size();k++){
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<')'<<" ";
//                 }
//             }
//         }
//     }

// }


//      swap 0's and 1's


// int main(){
//     vector<int>arr{0,1,1,0,0,1,0,0,1,0};
//     int start=0;
//     int end=arr.size()-1;
//     for(int i=0;i<=end;i++){
//         if(arr[i]==0){
//             swap(arr[start],arr[i]);
//             start++;
//         }
       
//        if(arr[i]==1){
//         swap(arr[i],arr[end]);
//         end--;
//        }
      
//     }
//     for(int i=0;i<arr.size();i++){
//      cout<<arr[i]<<" ";
//     }

// }