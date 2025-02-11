#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    if(number%2==0&&number%3==0){
        cout<<"both condition follow";

    }
    else{
        cout<<"notfollow";
}
    return 0;
}