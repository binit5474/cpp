#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,7,19,23};
    int max= arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}