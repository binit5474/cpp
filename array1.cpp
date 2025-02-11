#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[100],ans=0;
    cout<<"enter the element";
    for(int i= 0;i<size;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<size;i++){
        
ans=ans+arr[i];
        
    }
    cout<<ans<<endl;
}