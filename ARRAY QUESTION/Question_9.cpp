#include <iostream>
#include <string>
using namespace std;
bool checlpali(string s,int  i,int j){
    while(i<=j){
    if(s[i]!=s[j])
        return false;
        i++;
        j--;

}return true; 
} 
bool checkpal(string s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return checlpali(s,i+1,j) || checlpali(s,i,j-1);                 
        }
        else{
             i++;
            j--;
           
        }
    }return true;
}
int main(){
    
    string s;
    cin>>s;
   
    cout<<checkpal(s);
    return 0;
}