#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={2,3,5,7,6,1};
    int max=a[0],sec=0,i;
    for(i=0;i<6;i++){
        if(a[i]>max){
            max= a[i];
        }
    }
    for(int i=0;i<6;i++){
        if(a[i]<max&&a[i]>sec){
            sec=a[i];
        }

    }
    
cout<<sec<<endl;
}
