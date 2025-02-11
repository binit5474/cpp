/*#include<iostream>
using namespace std;
int main(){
    int n,sum=0,temp,rem;
    cin>>n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}*/
//in function
#include<iostream>
#include<math.h>
using namespace std;
int count(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
return count;
}
void arms(int num,int digit){
int temp=num,ans=0,rem;

while(temp>0){
rem=temp%10;
cout<<rem<<endl;
ans=ans+pow(rem,digit);
cout<<ans<<endl;
temp=temp/10;

}
cout<<ans;
    /*if(ans==num){
        cout<<"armsteong";
    }
    else{

        cout<<"notarmstrong";
    }*/
    
}
int main(){
int n;
cin>>n;
int digit=count(n); 

arms(n,digit);
}