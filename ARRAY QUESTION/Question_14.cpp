// FIND SECOND LARGEST ELEMENT AND SECOND SMALLEST ELEMENT OF AN ARRAY.

#include <bits/stdc++.h>
using namespace std;
void seclargest(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<"SECOND LARGEST NUMBER IS: "<<slargest<<endl;
}

void secsmallest(int arr[],int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    cout<<"SECOND SMALLEST NUMBER IS: "<<ssmallest;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    seclargest(arr,n);
    secsmallest(arr,n);  
}