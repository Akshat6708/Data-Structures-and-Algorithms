int main(){
    int arr[]={1,2,3,3,5,8,7};
    int sizea=7;
    int brr[]={3,3,8,9,10};
    int sizeb=5;
    vector<int> ans;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
                ans.push_back(arr[i]);
              
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }