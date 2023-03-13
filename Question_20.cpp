// CHECK ARRAY IS SORTED OR NOT USING RECCUSION.........\\

#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& arr,int& size,int i){
    // base
    if(i==size-1){
        return true;
    }

    if(arr[i+1]<arr[i])
        return false;


    return isSorted(arr,size,i+1);       
}

int main(){
    
    vector<int>arr{10,20,3,40,50,60};
    int size = arr.size();
    int i=0;
    bool sorted= isSorted(arr,size,i);

    if(sorted){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
    
}