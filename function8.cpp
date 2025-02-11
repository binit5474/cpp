#include<iostream>
using namespace std;
int main(){
    int i,count=0;
    for(i=2;i<=11;i++){
        if(11%i==0){
            count++;
        }
    }
    
    if(count>2){
        cout<<"not prime"<<endl;

    }
    else{
        cout<<"prime"<<endl;
    
}
}
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,count=0,n;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"this is not prime number"<<endl;
    }
    else{
        cout<<"this is prime number"<<endl;
    }
}*/