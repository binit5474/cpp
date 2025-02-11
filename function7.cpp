#include<iostream>
using namespace std;
void check(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(i%2!=0){
            cout<<"the odd number between a  and b is:"<<i<<endl;
        }

    }
     
}
    int main(){
        int a;
        cin>>a;
        int b;
        cin>>b;
        check(a,b);
    
    return 0;
}