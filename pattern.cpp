#include<iostream>
using namespace std;
int main(){

    //   1 . =>  squre pattern  
//     int n;
//     cout<<"enter a number \n";
//     cin>>n;
//     for(int row=0; row <n ; row++){
//         for(int col=0;col<n;col++){
//             cout<<row;
//         }
//         cout<<endl;
//    }


 //  2.= >   triangle pattern 

//  int n;
//  cout<<"enter a number \n";
//  cin>>n;
//  for(int row=0; row < n ; row++){
//      for(int col=0;col<=row;col++){
//          cout<<"*";
//      }
//      cout<<endl;
//     }


//  3. =>  triangle mirror pattern

// int n;
//  cout<<"enter a number \n";
//  cin>>n;
//  for(int row=0; row < n ; row++){
//     for(int spa=0; spa<=n-(row+2);spa++){
//         cout<<" ";
//      }
//      for(int col=0;col < row+1;col++){
//          cout<<"*";
//      }
   
//      cout<<endl;
//     }



// 4. =>  Holo Square 

//   int n;
//   cout<<"enter a number";
//   cin>>n;

//   for(int row=0;row<n; row++){
//     for(int col=0 ; col<n ; col++){
//         if(row==0||row==n-1||col==0||col==n-1){
//           cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
      
//     }
//     cout<<endl;
//   }
 

// 5. pyramid pattern


  int n;
  cout<<"enter a number";
  cin>>n;

  for(int row=0;row<n; row++){
    for(int spa=0; spa<n-2; spa++){
        cout<<" ";
    }
    for(int col=0 ; col<row ; col++){
      cout<<"*";
    }
  cout<<endl;
}
}