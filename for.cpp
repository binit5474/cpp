#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum+i ;

    }
    cout<<"the sum of n natural number is "<<sum;
    return 0;
}