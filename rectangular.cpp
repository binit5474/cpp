#include<iostream>
using namespace std;
int main(){
    //n=rows,m=column
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;

}