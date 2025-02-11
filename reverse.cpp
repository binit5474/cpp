#include<iostream>
using namespace std;
int main(){
    int i,n;
    int arr[]={1,2,3,4,5};
    n= sizeof(arr)/sizeof(arr[0]);
    for(i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
}

}