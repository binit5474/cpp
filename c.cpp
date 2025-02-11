#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={2,6,4,3,8,5};
    int sec=0;
 int max= arr[0]; 
    for(int i=0;i<6;i++){
         if(arr[i]>max){
            max=arr[i];
            
         }
    }
    for(int i=0;i<6;i++){
if(max>arr[i]&& arr[i]>sec){
sec=arr[i];
}
    }
    cout<<sec;
}

