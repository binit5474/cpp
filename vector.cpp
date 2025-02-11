#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter the no";
    cin>>x;
    
    
    int temp=-1;
    for(int i=0;i<=v.size();i++){
        if(v[i]==x){
            temp=i;
        }
        

    }
    cout<<temp<<endl;
    
    return 0;

}