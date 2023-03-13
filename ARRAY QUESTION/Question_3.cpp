// FIND THE MAX AND MIN ELEMENT OF AN ARRAY;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    int min=arr[0];
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<ans<<endl;
    cout<<min;
    return 0;
}