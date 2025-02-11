/*#include<iostream>
#include<vector>
using namespace std;
int  main(){
    int i,j,k,triple=0,targetsum=5;
  int a[]={3,1,2,4,0,6};
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            for(k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==targetsum){
                    triple++;
                }
            }
        }
    }
    
    cout<<triple<<endl;
    
}*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,j,k,triple=0,sum=5;
    int a[]={3,1,2,4,0,6};
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            for(k=j+1;k<6;k++){
                    if(a[i]+a[j]+a[k]==sum){
                        triple++;
                    }
            }
        }
    }
    cout<<triple<<endl;
}