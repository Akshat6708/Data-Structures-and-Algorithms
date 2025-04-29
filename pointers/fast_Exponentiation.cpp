// #include<iostream>
// using namespace std;

// int slowExponentiation(int a, int b){
//     int ans=1;
//     for(int i=0; i<4; i++){
//        ans= ans*a;
//     }
//     return ans;
// }

#include<iostream>
using namespace std;

int fastExponentiation(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    int FastExpoAns = fastExponentiation(a, b);
    cout << "Answer: " << FastExpoAns << endl;
}
