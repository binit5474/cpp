//Find the cube of a number using Function
/*#include<iostream>
using namespace std;
int cube(int n){
   int ans=n*n*n;
   cout<<"ans";
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<cube(n);
}*/
#include<iostream>
using namespace std;
int rev(int n){
 int rem ,ans=0,num;
 for(int i=0;i<n;i++){
 rem=n%10;
 n=n/10;
 ans=ans*10+rem;
 
 }
  return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<rev(n);
}