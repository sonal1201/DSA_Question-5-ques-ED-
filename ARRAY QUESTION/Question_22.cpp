// #FIND THE CONSECUTION ONES

#include <iostream>
#include <vector>
using namespace std;
int cnt=0;
int maxx=0;
int main(){
    vector<int>arr{1,0,1,1,0,1,1,1,1};
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            cnt++;
            maxx = max(maxx,cnt);
        }
        else{
            cnt = 0;
        }
    }
    cout<<maxx;

}