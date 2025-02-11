#include<iostream>
using namespace std;
int main(){
    int element,index=-1;
    cin>>element;
    int arr[6]={10,20,7,11,8,4};
    for(int i=0;i<6;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
    cout<<index;
    
}