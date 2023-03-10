// remove all ADJUSCENT OF A STRING;// 

#include <iostream>
#include <string.h>
using namespace std;
char dup(string alp){
    string ans=""; 
    int i =0;  
    while( i < alp.length()){
        if(ans.length()>0 && ans[ans.length()-1] == alp[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(alp[i]);
        }
        i++;
    }
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
    }
}
int main(){
    
    string alp ="aadaady";
    dup(alp);
    return 0;
}