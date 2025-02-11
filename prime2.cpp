#include<iostream>
using namespace std;
int main(){
 int i,j;
  
 for(i=10;i<=25;i++){
    for(j=2;j<=i-1;j++){
        if(i%j==0){
            break;
        }
    }
    if(i==j){
        cout<<i<<endl;
    }
 }
}