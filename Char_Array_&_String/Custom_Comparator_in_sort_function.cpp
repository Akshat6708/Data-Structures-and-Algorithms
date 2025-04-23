#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(char first ,char second){
    return first > second;
}
bool compare(int first, int second){
    return first>second;
}

int main(){
    string s="akshat";
    // sort(s.begin(),s.end());  //   aahkst
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;


    vector<int>v{2,5,3,1,4,6};
    sort(v.begin(),v.end(),compare);   
    for(auto i:v){ 
        cout<<i<<" ";   // 6,5,4,3,2,1
    }

}