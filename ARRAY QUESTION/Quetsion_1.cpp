// Reverse an Array

#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int rever(vector<int>arr){
    int start=0;
    int end= arr.size()-1;
    for(int i=0;i<end;i++){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        // swap(arr[start],arr[end]);
        start++;
        end--;

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
    rever(arr);
    return 0;
}