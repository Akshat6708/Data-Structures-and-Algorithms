#include<iostream>
using namespace std;

int mySqrt(int x) {
    int s=0;
   long long int e=x;
    long long int ans;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid>x){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePricision(int x, int TempSolution,int pricision){
    double Factor=1;
    double ans=TempSolution ;
    for(int i=0; i<pricision;i++){
        Factor=Factor/10;
        for(double j=ans;j*j<x;j=j+Factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter the value "<<endl;
    cin>>x;
    int TempSolution= mySqrt(x);
    cout<<"the sqrt of "<<x<<" is : "<<morePricision(x,TempSolution,4);
}