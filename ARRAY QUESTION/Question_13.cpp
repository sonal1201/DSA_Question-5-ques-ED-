// FIND THE LARGEST ELEMENT IN AN ARRAY

#include <iostream>
using namespace std;
void largest(int arr[],int n){
    int a=arr[0];
    for(int i =0;i<n;i++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
    cout<<a;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);

    return 0;
}