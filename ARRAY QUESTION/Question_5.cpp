// MOVE ALL NEG NUMBER TO ONE SIDE

#include <iostream>
#include <vector>
using namespace std;
int negative_os(vector<int>arr){
    int start =0;
    int end=arr.size()-1;
    while(start<end){
        if(arr[start]<=0){
            start++;
        }
        if(arr[end]>=0){
            end--;
        }
        else{
            swap(arr[start],arr[end]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    negative_os(arr);
    return 0; 
}
