// SORT AN ARRAY OF 0,1,2 WITHOUT SORTING FUNCTION.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int m=0;
    int h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            m++;
            l++;            
        }
        else if(arr[m]==1){       
            m++;          
        }
        else{
            swap(arr[h],arr[m]);
            h--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}