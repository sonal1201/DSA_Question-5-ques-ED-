// REMOVE ALL OCCURANCE OF SUBSTRING///

#include <iostream>
#include <string.h>
using namespace std;
string find_occ(string s, string part){
    int pos = s.find(part);
    while(pos!=-1){
        s.erase(pos,part.length());
        pos =s.find(part);
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}
int main(){
    string s = "aabcbabcctc";
    string part ="abc";
    find_occ(s,part);
}