#include<iostream>
#include<string.h>
using namespace std;
void ToUpperCase(char name[]){

    for (int i=0; i<strlen(name); i++){
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32;
        }
     
    }
    for (int i=0; i<strlen(name); i++){
       cout<<name[i];
    }
    
}
int main(){

    char name[50];
  cin.getline(name,50);
    ToUpperCase(name);
}