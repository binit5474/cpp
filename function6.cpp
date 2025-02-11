#include<iostream>
using namespace std;
int vote(int age ){
    if(age>18){
        cout<<"you can votes"<<endl;
    }
    else{
        cout<<"you cannot votes"<<endl;
    }

    return age;
}
    int main(){
        cout<<vote(11)<<endl;
    
    return 0;
}
