#include<iostream>
#include<vector>
using namespace std;
void CheckPalindrome(string& str , int i ,int j){
    // base case
    if(i>=j){
        cout<<"given string is palindrome";
        return ;
    }
    // let's solve one case
    if(str[i]!=str[j]){
        cout<<"not a palindrome";
        return;
    }
    CheckPalindrome(str, i+1, j-1);
}

int main(){
    string str;
    cout<<"enter a string : ";
    cin>>str;
    int i=0; int j= str.length()-1;
    CheckPalindrome(str, i, j);
}