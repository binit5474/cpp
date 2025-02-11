#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,j,targetsum=7;
    int a[]={3,4,6,7,1};
    int pairs=0;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]+a[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}