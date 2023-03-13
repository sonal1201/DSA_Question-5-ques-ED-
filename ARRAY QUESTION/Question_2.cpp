// Find the Kth MAX and MIn element;
// BEST APPROACH;

// USING vECTOR
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     int k;
//     cin>>k;
    
//     sort(arr.begin(),arr.end());
//     cout<<arr[k-1]<<"";
//         return 0;
// }

// USING ARRAY;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    sort(arr,arr+n);
    cout<<arr[k-1]<<"";
        return 0;
}