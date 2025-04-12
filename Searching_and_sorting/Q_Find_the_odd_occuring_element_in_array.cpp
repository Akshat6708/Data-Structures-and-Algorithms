#include<iostream>
#include<vector>
using namespace std;

// int search(vector<int>arr ){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
    
//     while(s<=e){

//         if(s==e){
//             return mid;
//         }

//         if(mid%2==0){
//             // mid is even
//             if(arr[mid]==arr[mid+1]){
//                 // me left me hu orr right me search kerna hai
//                 s=mid+2;
//             }
//             else{
//                   // me right me hu orr left me search kerna hai
//                   // ya fir me jaha per hu vo 
//                   //hi ans ho 

//                   e=mid;

//             }
//         }
//         else{
//             //  mid is odd
//             if(arr[mid]==arr[mid-1]){
//  // me left me hu orr right me search kerna hai
               
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
             
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int main(){
//     vector<int > arr{3,3,7,7,10,11,11};
//    int ans= search(arr);
//     cout<<"Index is "<<ans<<endl;
//     cout<<"Value is "<<arr[ans];
// }


int firstPosition(vector<int> arr, int k){
    int s=0;
    int e=arr.size()-1;
     int mid= s+(e-s)/2;
    int answer=-1;
     while(s<=e){
       
        if(arr[mid]==k){
          answer=mid;
          e=mid-1;
        }
       else if(arr[mid]>k){
        e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
     
     }
     return answer;
}
int LastPosition(vector<int> arr, int k){
    int s=0;
    int e=arr.size()-1;
     int mid= s+(e-s)/2;
    int answer=-1;
     while(s<=e){
       
        if(arr[mid]==k){
          answer=mid;
         s=mid+1;
        }
       else if(arr[mid]>k){
        e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
     
     }
     return answer;
}



int main(){
    vector<int> arr{0,0,1,1,2,2,2,2};
    int k=7;
    int first=firstPosition(arr,k);
    int last=LastPosition(arr,k);

  
    cout<<"first position of "<<arr[first]<< " is index "<<first<<" "<<endl;
    cout<<"last position of "<<arr[last]<< " is index "<<last<<" "<<endl;


}