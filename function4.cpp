/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int r=3;
   float pi=3.14;
   float circumfrance = 2*pi*r;
    cout<<pow(3,2)*pi<<endl;
    cout<<circumfrance<<endl;

    return 0;
}*/
#include<iostream>
using namespace std;
int squarenatural(int n){
  int   sqa= n*n;
    cout<<"the square of n natural number is :";
    return sqa ;
}
int main(){
    int i,n;
    for(i=1;i<=5;i++){
        cout<<squarenatural(i)<<endl;
    }
    return 0;
}