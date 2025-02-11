#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
     for(k=1;k<=i;k++){
        cout<<"*";
     }
     cout<<endl;
}
}