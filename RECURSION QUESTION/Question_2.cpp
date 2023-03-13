// BINARY SEARCH USING RECURSION............

#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int>& arr,int s,int e,int key){
    // base case
    if(s>e)
       return -1;

    int mid = (s+e)/2;
    // if target found code
    if(arr[mid]==key)
        return mid;

    if(arr[mid] < key) {
       return BinarySearch(arr,mid+1,e,key);
    }
    else{
        e = mid-1;
        return BinarySearch(arr,s,e,key);
    }

}

int main(){
    
    vector<int>arr{10,20,3,40,50,60};
    int size = arr.size();
    int s=0;
    int e = size-1;
    int target = 20;
    cout<<BinarySearch(arr,s,e,target);

    return 0;
    
 
}