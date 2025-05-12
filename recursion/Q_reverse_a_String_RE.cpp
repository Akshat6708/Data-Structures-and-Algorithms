#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void reverseStr(string&str,int i, int j){
    // base case 
    if(i>=j){
        cout<<"reverse string is : "<<str;
        return;
    }
    // let's solve one case
    swap(str[i], str[j]);
    // baki recursion sambhal lega
    reverseStr(str, i+1, j-1);
}
int main(){
    string str;
    cout<<"enter a string : ";
    cin>>str;
    int i=0;
    int j=str.length()-1;
    reverseStr(str, i, j);
}