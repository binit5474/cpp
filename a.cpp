#include<bits/stdc++.h>
using namespace std;
int main(){
    //int min
    int arr[5]={4,7,3,6,5};
     int ans = INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans){
            ans =arr[i];
        }
    }
cout<<ans;
}