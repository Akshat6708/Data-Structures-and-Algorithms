 #include<iostream>
using namespace std;
class maths{
    public:
    int sum(int a , int b){
        cout<<"I am in first singnature"<<endl;
      return a+b;
    }
    int sum(int a, int b ,int c){
         cout<<"I am in second singnature"<<endl;
        return a+b+c;
    }
    int sum(int a, float b){
         cout<<"I am in third singnature";
        return a+b;
    }
};
int main(){
    maths m ;
    cout<< m.sum(10,20, 100);
}