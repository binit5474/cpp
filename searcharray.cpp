#include<iostream>
using namespace std;
int main(){
   int arr[6]={10,20,7,11,8,4};
   int flag=0,temp=0;
    for(int i=0;i<6;i++){
        if(arr[i]==11){
            flag=1;
            temp=i;
        }
    
        }
        if(flag==1){
cout<<temp;
        }
        else{
            cout<<"not in array";
        }
        }
    
    
