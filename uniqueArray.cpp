#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={2,3,1,3,2,4,5};
    int i,j;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){ 
            if(a[i]==a[j]){
                a[i]=a[j]=-1;

            }
        }
    }
    for(i=0;i<7;i++){
        if(a[i]>-1 ){
            cout<<a[i]<<endl;
        }
    }
}