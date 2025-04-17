#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool IsPossible(vector<long long int > trees , long long int m ,long long int mid){
    long long int woodCollected=0;
    for(long long int i=0; i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected += trees[i]-mid;
        }
    }
    return woodCollected >= m;
}

 long long int MaxSawBladeHeight(vector<long long int > trees , long long int m){
    int s=0;
    int e= *max_element(trees.begin(),trees.end());
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        if(IsPossible(trees,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
 }

int main(){
long long int  n, m;
cout<<"enter a number of tree : ";
cin>>n;
cout<<"how much wood  is requred :";
cin>>m;
vector<long long int > trees;
while(n--){
    long long height;
    cin>>height;
    trees.push_back(height);
}
cout<<"Maximum saw blade height is : " <<MaxSawBladeHeight(trees,m)<<" meter";
    
    return 0;
}