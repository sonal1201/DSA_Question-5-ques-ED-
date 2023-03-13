// MOVE ALL ZERORS ONE SIDE;;;;

#include <iostream>
#include <vector>
using namespace std;
void movezeros(vector<int>arr){

    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<arr.size())arr[j++]=0;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
   
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezeros(arr);

    return 0;
}