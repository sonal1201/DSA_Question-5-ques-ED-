// FING THE LARGEST SUM OD CONTIGUOS SUBARRAY..........

#include <bits/stdc++.h>

using namespace std;

int largest(int arr[],int n){
    int maxx =INT_MIN;
    int max_till = 0;
    for(int i=0;i<n;i++){
        max_till+=arr[i];
        if(max_till>maxx){
            maxx = max_till;
        }
        if(max_till<0){
            max_till = 0;            
        }
    }
    return maxx;
}     
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n);
}