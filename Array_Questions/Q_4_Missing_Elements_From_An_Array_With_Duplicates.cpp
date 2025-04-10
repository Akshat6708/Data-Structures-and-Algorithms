#include<iostream>
using namespace std;
void findElement(int a[],int n){
    int i=0;
    while(i<n){
        int index=a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]);
        }
        else{
            ++i;
        }
    }
    cout<<"the missing element is : ";
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout<<i+1<<" ";
        }
       
    }
   

}

int main(){
    int n;
int a[]={5,3,5,3,4};
n=sizeof(a)/sizeof(int);
findElement(a,n);
    return 0;
}