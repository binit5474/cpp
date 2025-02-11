#include<iostream>
using namespace std;
int main(){
    int num=5429,rem,ans=0;
    while(num>9){
        ans=0;
    
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem;
        }
        num=ans;
    }
    cout<<ans;
}
