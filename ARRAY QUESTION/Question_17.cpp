// LEFT ROTATE AN ARRAY BY ONE.........

#include <iostream>
using namespace std;
void rotate(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,n);

    return 0;
}