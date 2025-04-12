#include<iostream>
#include<vector>
using namespace std;
int search(int dividend,int divisor){
    int s=0;
    int e= abs(dividend);
    int mid=s+(e-s)/2;
    int answer=0;
    while(s<=e){
        // perfect solution
        if(abs(mid*divisor)== abs(dividend)){
          answer= mid;
          break;
        }
        // not perfect solution
        else if(abs(mid*divisor) > abs(dividend)){
            // search in left
            e=mid-1;
        }
        else{
            // store ans
            // search right
            answer=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if((divisor<0 && dividend < 0)|| (divisor >0 && dividend > 0)){
        return answer;
    }
    else{
        return -answer;
    }
   
 
}
int main(){
  int dividend=-21;
  int divisor=7;
  int ans=search(dividend,divisor);
  cout<<"Ans is "<<ans;
 
}