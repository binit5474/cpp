#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,sum=0;
    int a[]={2,4,2,3,6,4,5};
    for(i=0;i<7;i++){
        if(i%2==0){
            sum=sum+a[i];
        }
        else{
            sum=sum-a[i];
        }
    }
    cout<<sum<<endl;
}
