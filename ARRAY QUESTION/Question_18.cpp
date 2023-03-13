//LEFT ROTATE AN ARRAY BY K PLACES.........

#include <bits/stdc++.h>
using namespace std;
void rotateByk(int a[],int n,int d){
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int d;
    cout<<"Enter a number to roated till: ";
    cin>>d;
    rotateByk(a,n,d);

    return 0;
}