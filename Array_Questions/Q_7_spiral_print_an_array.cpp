
#include<iostream>
#include<vector>
using namespace std;
     vector<int> spiralOrder(vector<vector<int>> matrix) {
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
        int main(){
      vector<vector<int> >matrix;
      vector<int>a{1,2,3,4,5,6};
      vector<int>b{7,8,9,10,11,12};
      vector<int>c{13,14,15,16,17,18};
      vector<int>d{19,20,21,22,23,24};
      vector<int>e{25,26,27,28,29,30};

      matrix.push_back(a);
      matrix.push_back(b);
      matrix.push_back(c);
      matrix.push_back(d);
      matrix.push_back(e);

      vector <int> ReturnVlaue=spiralOrder(matrix);
      for (int i=0;i<ReturnVlaue.size();i++){
        cout << ReturnVlaue[i]<<" ";
      }
        }
    