// tWO SUM USING TWO POINTER

#include <bits/stdc++.h>
#include <vector>
using namespace std;
string findsum(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    sort(arr.begin(),arr.end());
    while(s<e){
        int sum = arr[s]+arr[e];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) {
            s++;
            }
        else{ 
            e--;
            }
}
return "NO";
}
int main(){
    vector<int>arr{1,8,9,6,3};
    int target;
    cout<<"Enter your target: ";
    cin>>target;
    cout<<findsum(arr,target);


    return 0;

}