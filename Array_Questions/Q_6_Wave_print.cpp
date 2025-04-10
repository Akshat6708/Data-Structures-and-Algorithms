#include<iostream>
#include<vector>
using namespace std;

//     Wave print colomn wise
// int main(){
//     vector<vector<int> > arr{{1,2,3,77},{4,5,6,88},{7,8,9,99}};
//     int i=0;
//     int row=arr.size();
//     int col=arr[i].size();
// for ( i=0; i<col;i++){
//     if(i%2==0){
//         for(int j=0;j<row;j++){
//             cout<<arr[j][i]<<" ";
//   }
//     }
//     else{
//         for(int j=row-1;j>=0;j--){
//             cout<<arr[j][i]<<" ";
//   }
//     }
//     cout<<endl;
// }
// }



//       wave print row wise
// int main(){
//     vector<vector<int> > arr{{1,2,3,77},{4,5,6,88},{7,8,9,99}};
//     int i=0;
//     int row=arr.size();
//     int col=arr[i].size();
// for ( i=0; i<row;i++){
//     if(i%2==0){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//   }
//     }
//     else{
//         for(int j=col-1;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//   }
//     }
//     cout<<endl;
// }
// }










class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
             vector<int>ans;
            int m=matrix.size();
            int n=matrix[0].size();
            int count=0;
            int startingRow=0;
            int endingCol=n-1;
            int endingRow=m-1;
            int startingCol=0;
            int total_element=m*n;
    
            while(count<total_element){
                //  printing first row
                for(int i=startingCol;i<=endingCol && count<total_element ; i++){
                    ans.push_back(matrix[startingRow][i]);
                    count++;
                }
                startingRow++;
    
                  //  printing last col
                for(int i=startingRow;i<=endingRow && count<total_element ; i++){
                    ans.push_back(matrix[i][endingCol]);
                    count++;
                }
                endingCol--;
    
                     //  printing last col
                for(int i=endingCol;i>=startingCol && count<total_element ; i--){
                    ans.push_back(matrix[endingRow][i]);
                    count++;
                }
                endingRow--;
    
    
                     //  printing starting col
                for(int i=endingRow;i>=startingRow && count<total_element ; i--){
                    ans.push_back(matrix[i][startingCol]);
                    count++;
                }
                startingCol++;
            } 
            return ans;
            
        }
    };