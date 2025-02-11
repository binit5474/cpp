#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks";
    cin>>marks;
    if(marks>33){
        if(marks>80){
            cout<<"gracefully pass";
        }
            else{
                cout<<"pass";
            }
        
    }
    else{
        cout<<"fail";
    }
    
}