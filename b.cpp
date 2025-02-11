#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={2,5,6,3,8,3};

    int i=0,j=5;
    while(i<j){
        swap( arr[i],arr[j]);
        j--;
        i++;
    }
    for(int i=0;i<6;i++){
    cout<<arr[i];
}
}