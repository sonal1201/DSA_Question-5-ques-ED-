// Selection Sort..............

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
for (int i =0;i<n;i++){
    cin>>arr[i];
}

// Sorting Code
for (int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
        }
    }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

   return 0; 
}
