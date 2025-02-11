#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;121
    cout<<"enter the number";
 cin>>n;
 int num=n;
 while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
 }
 
 if(rev==num){
    cout<<"palindrome"<<endl;

 }
 else{
    cout<<"not palindrome"<<endl;
 }
}