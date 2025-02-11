#include<iostream>
using namespace std;
int main(){
    int arr[6]={8,3,5,2,7,2};
    int i=0,j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    cout<<i;
    
}