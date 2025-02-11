#include<iostream>
#include<array>
using namespace std;
int main(){
array <int,6> a = {4,3,5,2,4,3};
for(int i=0;i<=5;i++){
    cout<<a[i]<<endl;
}
cout<<"element at 2nd index"<<a.at(0)<<endl;
cout<<"front"<<a.front()<<endl;
cout<<"back"<<a.back()<<endl;
}
